﻿using Microsoft.Azure.Devices.Client;
using Microsoft.Azure.Devices.Common.Exceptions;
using Microsoft.ServiceBus.Messaging;
using Newtonsoft.Json;
using System;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using Devices = Microsoft.Azure.Devices;

namespace AzureIoTHubSample1
{
    public static class AzureIoTHub
    {
        /// <summary>
        /// Please replace with correct connection string value
        /// The connection string could be got from Azure IoT Hub -> Shared access policies -> iothubowner -> Connection String:
        /// </summary>
        private const string connectionString = "HostName=McArthurIoTHub.azure-devices.net;SharedAccessKeyName=iothubowner;SharedAccessKey=RuXxDT5GlAVRVupuPnlA5zzJoG1J6XttBv58de3eW1I=";

        /// <summary>
        /// Please replace with correct device connection string
        /// The device connect string could be got from Azure IoT Hub -> Devices -> {your device name } -> Connection string
        /// </summary>
        private const string deviceConnectionString = "HostName=McArthurIoTHub.azure-devices.net;SharedAccessKeyName=device;SharedAccessKey=MZu/LXpwFdMm/fjy/JBTYQI3DK+qe8M5OapzQg2HX/E=";

        private const string iotHubD2cEndpoint = "messages/events";

        public static async Task<string> CreateDeviceIdentityAsync(string deviceName)
        {
            var registryManager = Devices.RegistryManager.CreateFromConnectionString(connectionString);
            Devices.Device device;
            try
            {
                device = await registryManager.AddDeviceAsync(new Devices.Device(deviceName));
            }
            catch (DeviceAlreadyExistsException)
            {
                device = await registryManager.GetDeviceAsync(deviceName);
            }
            return device.Authentication.SymmetricKey.PrimaryKey;
        }

        public static async Task SendDeviceToCloudMessageAsync(CancellationToken cancelToken)
        {
            var deviceClient = DeviceClient.CreateFromConnectionString(deviceConnectionString);

            double avgWindSpeed = 10; // m/s
            Random rand = new Random();

            while (true)
            {
                if (cancelToken.IsCancellationRequested)
                    break;

                double currentWindSpeed = avgWindSpeed + rand.NextDouble() * 4 - 2;

                var telemetryDataPoint = new
                {
                    windSpeed = currentWindSpeed
                };
                var messageString = JsonConvert.SerializeObject(telemetryDataPoint);
                var message = new Message(Encoding.ASCII.GetBytes(messageString));
                await deviceClient.SendEventAsync(message);
                Console.WriteLine("{0} > Sending message: {1}", DateTime.Now, messageString);
                await Task.Delay(500);
            }
        }

        public static async Task<string> ReceiveCloudToDeviceMessageAsync()
        {
            var deviceClient = DeviceClient.CreateFromConnectionString(deviceConnectionString);

            while (true)
            {
                var receivedMessage = await deviceClient.ReceiveAsync();

                if (receivedMessage != null)
                {
                    var messageData = Encoding.ASCII.GetString(receivedMessage.GetBytes());
                    await deviceClient.CompleteAsync(receivedMessage);
                    return messageData;
                }

                await Task.Delay(TimeSpan.FromSeconds(1));
            }
        }

        public static async Task ReceiveMessagesFromDeviceAsync(CancellationToken cancelToken)
        {
            EventHubClient eventHubClient = EventHubClient.CreateFromConnectionString(connectionString, iotHubD2cEndpoint);
            var d2cPartitions = eventHubClient.GetRuntimeInformation().PartitionIds;

            await Task.WhenAll(d2cPartitions.Select(partition => ReceiveMessagesFromDeviceAsync(eventHubClient, partition, cancelToken)));
        }

        private static async Task ReceiveMessagesFromDeviceAsync(EventHubClient eventHubClient, string partition, CancellationToken ct)
        {
            var eventHubReceiver = eventHubClient.GetDefaultConsumerGroup().CreateReceiver(partition, DateTime.UtcNow);
            while (true)
            {
                if (ct.IsCancellationRequested)
                    break;

                EventData eventData = await eventHubReceiver.ReceiveAsync(TimeSpan.FromSeconds(2));
                if (eventData == null) continue;

                string data = Encoding.UTF8.GetString(eventData.GetBytes());
                Console.WriteLine("Message received. Partition: {0} Data: '{1}'", partition, data);
            }
        }
    }
}
