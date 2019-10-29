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

namespace net { namespace allplay { namespace MCU {

// Methods
public ref class MCUAdvanceLoopModeCalledEventArgs sealed
{
public:
    MCUAdvanceLoopModeCalledEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property MCUAdvanceLoopModeResult^ Result
    {
        MCUAdvanceLoopModeResult^ get() { return m_result; }
        void set(_In_ MCUAdvanceLoopModeResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<MCUAdvanceLoopModeResult^>^ GetResultAsync(MCUAdvanceLoopModeCalledEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<MCUAdvanceLoopModeResult^>
        {
            return t;
        });
    }
    
private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<MCUAdvanceLoopModeResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    MCUAdvanceLoopModeResult^ m_result;
};

public ref class MCUGetCurrentItemUrlCalledEventArgs sealed
{
public:
    MCUGetCurrentItemUrlCalledEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property MCUGetCurrentItemUrlResult^ Result
    {
        MCUGetCurrentItemUrlResult^ get() { return m_result; }
        void set(_In_ MCUGetCurrentItemUrlResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<MCUGetCurrentItemUrlResult^>^ GetResultAsync(MCUGetCurrentItemUrlCalledEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<MCUGetCurrentItemUrlResult^>
        {
            return t;
        });
    }
    
private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<MCUGetCurrentItemUrlResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    MCUGetCurrentItemUrlResult^ m_result;
};

public ref class MCUPlayItemCalledEventArgs sealed
{
public:
    MCUPlayItemCalledEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberUrl, _In_ Platform::String^ interfaceMemberTitle, _In_ Platform::String^ interfaceMemberArtist, _In_ Platform::String^ interfaceMemberThumbnailUrl, _In_ int64 interfaceMemberDuration, _In_ Platform::String^ interfaceMemberAlbum, _In_ Platform::String^ interfaceMemberGenre);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property MCUPlayItemResult^ Result
    {
        MCUPlayItemResult^ get() { return m_result; }
        void set(_In_ MCUPlayItemResult^ value) { m_result = value; }
    }

    property Platform::String^ Url
    {
        Platform::String^ get() { return m_interfaceMemberUrl; }
    }

    property Platform::String^ Title
    {
        Platform::String^ get() { return m_interfaceMemberTitle; }
    }

    property Platform::String^ Artist
    {
        Platform::String^ get() { return m_interfaceMemberArtist; }
    }

    property Platform::String^ ThumbnailUrl
    {
        Platform::String^ get() { return m_interfaceMemberThumbnailUrl; }
    }

    property int64 Duration
    {
        int64 get() { return m_interfaceMemberDuration; }
    }

    property Platform::String^ Album
    {
        Platform::String^ get() { return m_interfaceMemberAlbum; }
    }

    property Platform::String^ Genre
    {
        Platform::String^ get() { return m_interfaceMemberGenre; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<MCUPlayItemResult^>^ GetResultAsync(MCUPlayItemCalledEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<MCUPlayItemResult^>
        {
            return t;
        });
    }
    
private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<MCUPlayItemResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    MCUPlayItemResult^ m_result;
    Platform::String^ m_interfaceMemberUrl;
    Platform::String^ m_interfaceMemberTitle;
    Platform::String^ m_interfaceMemberArtist;
    Platform::String^ m_interfaceMemberThumbnailUrl;
    int64 m_interfaceMemberDuration;
    Platform::String^ m_interfaceMemberAlbum;
    Platform::String^ m_interfaceMemberGenre;
};

public ref class MCUSetExternalSourceCalledEventArgs sealed
{
public:
    MCUSetExternalSourceCalledEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberName, _In_ bool interfaceMemberInterruptible, _In_ bool interfaceMemberVolumeCtrlEnabled);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property MCUSetExternalSourceResult^ Result
    {
        MCUSetExternalSourceResult^ get() { return m_result; }
        void set(_In_ MCUSetExternalSourceResult^ value) { m_result = value; }
    }

    property Platform::String^ Name
    {
        Platform::String^ get() { return m_interfaceMemberName; }
    }

    property bool Interruptible
    {
        bool get() { return m_interfaceMemberInterruptible; }
    }

    property bool VolumeCtrlEnabled
    {
        bool get() { return m_interfaceMemberVolumeCtrlEnabled; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<MCUSetExternalSourceResult^>^ GetResultAsync(MCUSetExternalSourceCalledEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<MCUSetExternalSourceResult^>
        {
            return t;
        });
    }
    
private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<MCUSetExternalSourceResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    MCUSetExternalSourceResult^ m_result;
    Platform::String^ m_interfaceMemberName;
    bool m_interfaceMemberInterruptible;
    bool m_interfaceMemberVolumeCtrlEnabled;
};

public ref class MCUToggleShuffleModeCalledEventArgs sealed
{
public:
    MCUToggleShuffleModeCalledEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property MCUToggleShuffleModeResult^ Result
    {
        MCUToggleShuffleModeResult^ get() { return m_result; }
        void set(_In_ MCUToggleShuffleModeResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<MCUToggleShuffleModeResult^>^ GetResultAsync(MCUToggleShuffleModeCalledEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<MCUToggleShuffleModeResult^>
        {
            return t;
        });
    }
    
private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<MCUToggleShuffleModeResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    MCUToggleShuffleModeResult^ m_result;
};

// Readable Properties
public ref class MCUGetVersionRequestedEventArgs sealed
{
public:
    MCUGetVersionRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property MCUGetVersionResult^ Result
    {
        MCUGetVersionResult^ get() { return m_result; }
        void set(_In_ MCUGetVersionResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<MCUGetVersionResult^>^ GetResultAsync(MCUGetVersionRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<MCUGetVersionResult^>
        {
            return t;
        });
    }

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<MCUGetVersionResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    MCUGetVersionResult^ m_result;
};

// Writable Properties
} } } 
