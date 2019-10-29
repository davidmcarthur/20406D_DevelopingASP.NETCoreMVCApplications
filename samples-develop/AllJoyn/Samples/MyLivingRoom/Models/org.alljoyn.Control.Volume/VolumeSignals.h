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
#pragma once

namespace org { namespace alljoyn { namespace Control { namespace Volume {

ref class VolumeSignals;

public interface class IVolumeSignals
{
    event Windows::Foundation::TypedEventHandler<VolumeSignals^, VolumeEnabledChangedReceivedEventArgs^>^ EnabledChangedReceived;
    event Windows::Foundation::TypedEventHandler<VolumeSignals^, VolumeMuteChangedReceivedEventArgs^>^ MuteChangedReceived;
    event Windows::Foundation::TypedEventHandler<VolumeSignals^, VolumeVolumeChangedReceivedEventArgs^>^ VolumeChangedReceived;
};

public ref class VolumeSignals sealed : [Windows::Foundation::Metadata::Default] IVolumeSignals
{
public:
    // Calling this method will send the EnabledChanged signal to every member of the session.
    void EnabledChanged(_In_ bool interfaceMemberEnabled);

    // This event fires whenever the EnabledChanged signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<VolumeSignals^, VolumeEnabledChangedReceivedEventArgs^>^ EnabledChangedReceived 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<VolumeSignals^, VolumeEnabledChangedReceivedEventArgs^>^ handler) 
        { 
            return _EnabledChangedReceived += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<VolumeSignals^>(sender), safe_cast<VolumeEnabledChangedReceivedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _EnabledChangedReceived -= token; 
        } 
    internal: 
        void raise(VolumeSignals^ sender, VolumeEnabledChangedReceivedEventArgs^ args) 
        { 
            _EnabledChangedReceived(sender, args);
        } 
    }

    // Calling this method will send the MuteChanged signal to every member of the session.
    void MuteChanged(_In_ bool interfaceMemberNewMute);

    // This event fires whenever the MuteChanged signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<VolumeSignals^, VolumeMuteChangedReceivedEventArgs^>^ MuteChangedReceived 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<VolumeSignals^, VolumeMuteChangedReceivedEventArgs^>^ handler) 
        { 
            return _MuteChangedReceived += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<VolumeSignals^>(sender), safe_cast<VolumeMuteChangedReceivedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _MuteChangedReceived -= token; 
        } 
    internal: 
        void raise(VolumeSignals^ sender, VolumeMuteChangedReceivedEventArgs^ args) 
        { 
            _MuteChangedReceived(sender, args);
        } 
    }

    // Calling this method will send the VolumeChanged signal to every member of the session.
    void VolumeChanged(_In_ int16 interfaceMemberNewVolume);

    // This event fires whenever the VolumeChanged signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<VolumeSignals^, VolumeVolumeChangedReceivedEventArgs^>^ VolumeChangedReceived 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<VolumeSignals^, VolumeVolumeChangedReceivedEventArgs^>^ handler) 
        { 
            return _VolumeChangedReceived += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<VolumeSignals^>(sender), safe_cast<VolumeVolumeChangedReceivedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _VolumeChangedReceived -= token; 
        } 
    internal: 
        void raise(VolumeSignals^ sender, VolumeVolumeChangedReceivedEventArgs^ args) 
        { 
            _VolumeChangedReceived(sender, args);
        } 
    }

internal:
    void Initialize(_In_ alljoyn_busobject busObject, _In_ alljoyn_sessionid sessionId);
    void CallEnabledChangedReceived(_In_ VolumeSignals^ sender, _In_ VolumeEnabledChangedReceivedEventArgs^ args);
    void CallMuteChangedReceived(_In_ VolumeSignals^ sender, _In_ VolumeMuteChangedReceivedEventArgs^ args);
    void CallVolumeChangedReceived(_In_ VolumeSignals^ sender, _In_ VolumeVolumeChangedReceivedEventArgs^ args);

private:
    alljoyn_busobject m_busObject;
    alljoyn_sessionid m_sessionId;

    virtual event Windows::Foundation::EventHandler<Platform::Object^>^ _EnabledChangedReceived;
    virtual event Windows::Foundation::EventHandler<Platform::Object^>^ _MuteChangedReceived;
    virtual event Windows::Foundation::EventHandler<Platform::Object^>^ _VolumeChangedReceived;

    alljoyn_interfacedescription_member m_memberEnabledChanged;
    alljoyn_interfacedescription_member m_memberMuteChanged;
    alljoyn_interfacedescription_member m_memberVolumeChanged;
};

} } } } 
