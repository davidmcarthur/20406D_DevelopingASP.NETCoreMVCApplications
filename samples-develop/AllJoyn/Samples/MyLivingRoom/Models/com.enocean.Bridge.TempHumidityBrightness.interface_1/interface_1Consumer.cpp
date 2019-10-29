//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#include "pch.h"

using namespace concurrency;
using namespace Microsoft::WRL;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Devices::AllJoyn;
using namespace com::enocean::Bridge::TempHumidityBrightness::interface_1;

std::map<alljoyn_interfacedescription, WeakReference*> interface_1Consumer::SourceInterfaces;

interface_1Consumer::interface_1Consumer(AllJoynBusAttachment^ busAttachment)
    : m_busAttachment(busAttachment),
    m_proxyBusObject(nullptr),
    m_busObject(nullptr),
    m_sessionListener(nullptr),
    m_sessionId(0)
{
    m_weak = new WeakReference(this);
    m_signals = ref new interface_1Signals();
    m_nativeBusAttachment = AllJoynHelpers::GetInternalBusAttachment(m_busAttachment);
}

interface_1Consumer::~interface_1Consumer()
{
    AllJoynBusObjectManager::ReleaseBusObject(m_nativeBusAttachment, AllJoynHelpers::PlatformToMultibyteString(ServiceObjectPath).data());
    if (SessionListener != nullptr)
    {
        alljoyn_busattachment_setsessionlistener(m_nativeBusAttachment, m_sessionId, nullptr);
        alljoyn_sessionlistener_destroy(SessionListener);
    }
    if (nullptr != ProxyBusObject)
    {
        alljoyn_proxybusobject_destroy(ProxyBusObject);
    }
    delete m_weak;
}

void interface_1Consumer::OnSessionLost(_In_ alljoyn_sessionid sessionId, _In_ alljoyn_sessionlostreason reason)
{
    if (sessionId == m_sessionId)
    {
        AllJoynSessionLostEventArgs^ args = ref new AllJoynSessionLostEventArgs(static_cast<AllJoynSessionLostReason>(reason));
        SessionLost(this, args);
    }
}

void interface_1Consumer::OnSessionMemberAdded(_In_ alljoyn_sessionid sessionId, _In_ PCSTR uniqueName)
{
    if (sessionId == m_sessionId)
    {
        auto args = ref new AllJoynSessionMemberAddedEventArgs(AllJoynHelpers::MultibyteToPlatformString(uniqueName));
        SessionMemberAdded(this, args);
    }
}

void interface_1Consumer::OnSessionMemberRemoved(_In_ alljoyn_sessionid sessionId, _In_ PCSTR uniqueName)
{
    if (sessionId == m_sessionId)
    {
        auto args = ref new AllJoynSessionMemberRemovedEventArgs(AllJoynHelpers::MultibyteToPlatformString(uniqueName));
        SessionMemberRemoved(this, args);
    }
}

QStatus interface_1Consumer::AddSignalHandler(_In_ alljoyn_busattachment busAttachment, _In_ alljoyn_interfacedescription interfaceDescription, _In_ PCSTR methodName, _In_ alljoyn_messagereceiver_signalhandler_ptr handler)
{
    alljoyn_interfacedescription_member member;
    if (!alljoyn_interfacedescription_getmember(interfaceDescription, methodName, &member))
    {
        return ER_BUS_INTERFACE_NO_SUCH_MEMBER;
    }

    return alljoyn_busattachment_registersignalhandler(busAttachment, handler, member, NULL);
}

IAsyncOperation<interface_1JoinSessionResult^>^ interface_1Consumer::JoinSessionAsync(
    _In_ AllJoynServiceInfo^ serviceInfo, _Inout_ interface_1Watcher^ watcher)
{
    return create_async([serviceInfo, watcher]() -> interface_1JoinSessionResult^
    {
        auto result = ref new interface_1JoinSessionResult();
        result->Consumer = ref new interface_1Consumer(watcher->BusAttachment);
        result->Status = result->Consumer->JoinSession(serviceInfo);
        return result;
    });
}


IAsyncOperation<interface_1GetHumidityResult^>^ interface_1Consumer::GetHumidityAsync()
{
    return create_async([this]() -> interface_1GetHumidityResult^
    {
        PropertyGetContext<Platform::String^> getContext;
        
        alljoyn_proxybusobject_getpropertyasync(
            ProxyBusObject,
            "com.enocean.Bridge.TempHumidityBrightness.interface_1",
            "Humidity",
            [](QStatus status, alljoyn_proxybusobject obj, const alljoyn_msgarg value, void* context)
            {
                UNREFERENCED_PARAMETER(obj);
                auto propertyContext = static_cast<PropertyGetContext<Platform::String^>*>(context);

                if (ER_OK == status)
                {
                    Platform::String^ argument;
                    status = static_cast<QStatus>(TypeConversionHelpers::GetAllJoynMessageArg(value, "s", &argument));

                    propertyContext->SetValue(argument);
                }
                propertyContext->SetStatus(status);
                propertyContext->SetEvent();
            },
            c_MessageTimeoutInMilliseconds,
            &getContext);

        getContext.Wait();

        auto result = ref new interface_1GetHumidityResult();
        result->Status = getContext.GetStatus();
        result->Humidity = getContext.GetValue();
        return result;
    });
}

IAsyncOperation<interface_1GetTemperatureResult^>^ interface_1Consumer::GetTemperatureAsync()
{
    return create_async([this]() -> interface_1GetTemperatureResult^
    {
        PropertyGetContext<Platform::String^> getContext;
        
        alljoyn_proxybusobject_getpropertyasync(
            ProxyBusObject,
            "com.enocean.Bridge.TempHumidityBrightness.interface_1",
            "Temperature",
            [](QStatus status, alljoyn_proxybusobject obj, const alljoyn_msgarg value, void* context)
            {
                UNREFERENCED_PARAMETER(obj);
                auto propertyContext = static_cast<PropertyGetContext<Platform::String^>*>(context);

                if (ER_OK == status)
                {
                    Platform::String^ argument;
                    status = static_cast<QStatus>(TypeConversionHelpers::GetAllJoynMessageArg(value, "s", &argument));

                    propertyContext->SetValue(argument);
                }
                propertyContext->SetStatus(status);
                propertyContext->SetEvent();
            },
            c_MessageTimeoutInMilliseconds,
            &getContext);

        getContext.Wait();

        auto result = ref new interface_1GetTemperatureResult();
        result->Status = getContext.GetStatus();
        result->Temperature = getContext.GetValue();
        return result;
    });
}

void interface_1Consumer::OnPropertyChanged(_In_ alljoyn_proxybusobject obj, _In_ PCSTR interfaceName, _In_ const alljoyn_msgarg changed, _In_ const alljoyn_msgarg invalidated)
{
    UNREFERENCED_PARAMETER(obj);
    UNREFERENCED_PARAMETER(interfaceName);
    UNREFERENCED_PARAMETER(invalidated);

    alljoyn_msgarg changedProperties;
    size_t changedPropertyCount;
    if (ER_OK != alljoyn_msgarg_get(changed, "a{sv}", &changedPropertyCount, &changedProperties))
    {
        return;
    }

    for (size_t i = 0; i < changedPropertyCount; i++)
    {
        char* propertyName;
        alljoyn_msgarg propertyValue;
        if (ER_OK != alljoyn_msgarg_get(alljoyn_msgarg_array_element(changedProperties, i), "{sv}", &propertyName, &propertyValue))
        {
            return;
        }


        if (strcmp("Humidity", propertyName) == 0)
        {
            Platform::String^ argument;
            (void)TypeConversionHelpers::GetAllJoynMessageArg(propertyValue, "s", &argument);
            HumidityChanged(this, (Platform::Object^)argument);
        }
        if (strcmp("Temperature", propertyName) == 0)
        {
            Platform::String^ argument;
            (void)TypeConversionHelpers::GetAllJoynMessageArg(propertyValue, "s", &argument);
            TemperatureChanged(this, (Platform::Object^)argument);
        }
    }
}

int32 interface_1Consumer::JoinSession(_In_ AllJoynServiceInfo^ serviceInfo)
{
    alljoyn_sessionlistener_callbacks callbacks =
    {
        AllJoynHelpers::SessionLostHandler<interface_1Consumer>,
        AllJoynHelpers::SessionMemberAddedHandler<interface_1Consumer>,
        AllJoynHelpers::SessionMemberRemovedHandler<interface_1Consumer>
    };

    alljoyn_busattachment_enableconcurrentcallbacks(AllJoynHelpers::GetInternalBusAttachment(m_busAttachment));

    SessionListener = alljoyn_sessionlistener_create(&callbacks, m_weak);
    alljoyn_sessionopts sessionOpts = alljoyn_sessionopts_create(ALLJOYN_TRAFFIC_TYPE_MESSAGES, true, ALLJOYN_PROXIMITY_ANY, ALLJOYN_TRANSPORT_ANY);

    std::vector<char> sessionNameUtf8 = AllJoynHelpers::PlatformToMultibyteString(serviceInfo->UniqueName);
    RETURN_IF_QSTATUS_ERROR(alljoyn_busattachment_joinsession(
        m_nativeBusAttachment,
        &sessionNameUtf8[0],
        serviceInfo->SessionPort,
        SessionListener,
        &m_sessionId,
        sessionOpts));
    alljoyn_sessionopts_destroy(sessionOpts);

    ServiceObjectPath = serviceInfo->ObjectPath;
    std::vector<char> objectPath = AllJoynHelpers::PlatformToMultibyteString(ServiceObjectPath);

    if (objectPath.empty())
    {
        return AllJoynStatus::Fail;
    }

    ProxyBusObject = alljoyn_proxybusobject_create(m_nativeBusAttachment, &sessionNameUtf8[0], &objectPath[0], m_sessionId);
    if (nullptr == ProxyBusObject)
    {
        return AllJoynStatus::Fail;
    }

    PCSTR propertyNames[] = { "Humidity", "Temperature" };

    RETURN_IF_QSTATUS_ERROR(alljoyn_proxybusobject_registerpropertieschangedlistener(
        ProxyBusObject,
        "com.enocean.Bridge.TempHumidityBrightness.interface_1",
        propertyNames,
        _countof(propertyNames),
        AllJoynHelpers::PropertyChangedHandler<interface_1Consumer>, 
        m_weak));


    alljoyn_interfacedescription description = alljoyn_busattachment_getinterface(m_nativeBusAttachment, "com.enocean.Bridge.TempHumidityBrightness.interface_1");
    if (nullptr == description)
    {
        return AllJoynStatus::Fail;
    }

    RETURN_IF_QSTATUS_ERROR(AllJoynBusObjectManager::GetBusObject(m_nativeBusAttachment, AllJoynHelpers::PlatformToMultibyteString(ServiceObjectPath).data(), &m_busObject));
   
    if (!AllJoynBusObjectManager::BusObjectIsRegistered(m_nativeBusAttachment, m_busObject))
    {
        RETURN_IF_QSTATUS_ERROR(alljoyn_busobject_addinterface(BusObject, description));
    }


    SourceInterfaces[description] = m_weak;

    unsigned int noneMechanismIndex = 0;
    bool authenticationMechanismsContainsNone = m_busAttachment->AuthenticationMechanisms->IndexOf(AllJoynAuthenticationMechanism::None, &noneMechanismIndex);
    QCC_BOOL interfaceIsSecure = alljoyn_interfacedescription_issecure(description);

    // If the current set of AuthenticationMechanisms supports authentication, 
    // determine whether to secure the connection.
    if (AllJoynHelpers::CanSecure(m_busAttachment->AuthenticationMechanisms))
    {
        // Secure the connection if the org.alljoyn.Bus.Secure XML annotation
        // is specified, or if None is not present in AuthenticationMechanisms.
        if (!authenticationMechanismsContainsNone || interfaceIsSecure)
        {
            RETURN_IF_QSTATUS_ERROR(alljoyn_proxybusobject_secureconnection(ProxyBusObject, QCC_FALSE));
            RETURN_IF_QSTATUS_ERROR(AllJoynBusObjectManager::TryRegisterBusObject(m_nativeBusAttachment, BusObject, true));
        }
        else
        {
            RETURN_IF_QSTATUS_ERROR(AllJoynBusObjectManager::TryRegisterBusObject(m_nativeBusAttachment, BusObject, false));
        }
    }
    else
    {
        // If the current set of AuthenticationMechanisms does not support authentication
        // but the interface requires security, report an error.
        if (interfaceIsSecure)
        {
            return static_cast<int32>(ER_BUS_NO_AUTHENTICATION_MECHANISM);
        }
        else
        {
            RETURN_IF_QSTATUS_ERROR(AllJoynBusObjectManager::TryRegisterBusObject(m_nativeBusAttachment, BusObject, false));
        }
    }

    RETURN_IF_QSTATUS_ERROR(alljoyn_proxybusobject_addinterface(ProxyBusObject, description));
    
    m_signals->Initialize(BusObject, m_sessionId);

    return AllJoynStatus::Ok;
}
