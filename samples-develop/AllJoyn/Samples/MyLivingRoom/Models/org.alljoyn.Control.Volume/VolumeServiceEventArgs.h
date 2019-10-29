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

// Methods
public ref class VolumeAdjustVolumeCalledEventArgs sealed
{
public:
    VolumeAdjustVolumeCalledEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ int16 interfaceMemberDelta);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property VolumeAdjustVolumeResult^ Result
    {
        VolumeAdjustVolumeResult^ get() { return m_result; }
        void set(_In_ VolumeAdjustVolumeResult^ value) { m_result = value; }
    }

    property int16 Delta
    {
        int16 get() { return m_interfaceMemberDelta; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<VolumeAdjustVolumeResult^>^ GetResultAsync(VolumeAdjustVolumeCalledEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<VolumeAdjustVolumeResult^>
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
    concurrency::task_completion_event<VolumeAdjustVolumeResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    VolumeAdjustVolumeResult^ m_result;
    int16 m_interfaceMemberDelta;
};

public ref class VolumeAdjustVolumePercentCalledEventArgs sealed
{
public:
    VolumeAdjustVolumePercentCalledEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ double interfaceMemberChange);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property VolumeAdjustVolumePercentResult^ Result
    {
        VolumeAdjustVolumePercentResult^ get() { return m_result; }
        void set(_In_ VolumeAdjustVolumePercentResult^ value) { m_result = value; }
    }

    property double Change
    {
        double get() { return m_interfaceMemberChange; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<VolumeAdjustVolumePercentResult^>^ GetResultAsync(VolumeAdjustVolumePercentCalledEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<VolumeAdjustVolumePercentResult^>
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
    concurrency::task_completion_event<VolumeAdjustVolumePercentResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    VolumeAdjustVolumePercentResult^ m_result;
    double m_interfaceMemberChange;
};

// Readable Properties
public ref class VolumeGetEnabledRequestedEventArgs sealed
{
public:
    VolumeGetEnabledRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property VolumeGetEnabledResult^ Result
    {
        VolumeGetEnabledResult^ get() { return m_result; }
        void set(_In_ VolumeGetEnabledResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<VolumeGetEnabledResult^>^ GetResultAsync(VolumeGetEnabledRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<VolumeGetEnabledResult^>
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
    concurrency::task_completion_event<VolumeGetEnabledResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    VolumeGetEnabledResult^ m_result;
};

public ref class VolumeGetMuteRequestedEventArgs sealed
{
public:
    VolumeGetMuteRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property VolumeGetMuteResult^ Result
    {
        VolumeGetMuteResult^ get() { return m_result; }
        void set(_In_ VolumeGetMuteResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<VolumeGetMuteResult^>^ GetResultAsync(VolumeGetMuteRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<VolumeGetMuteResult^>
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
    concurrency::task_completion_event<VolumeGetMuteResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    VolumeGetMuteResult^ m_result;
};

public ref class VolumeGetVersionRequestedEventArgs sealed
{
public:
    VolumeGetVersionRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property VolumeGetVersionResult^ Result
    {
        VolumeGetVersionResult^ get() { return m_result; }
        void set(_In_ VolumeGetVersionResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<VolumeGetVersionResult^>^ GetResultAsync(VolumeGetVersionRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<VolumeGetVersionResult^>
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
    concurrency::task_completion_event<VolumeGetVersionResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    VolumeGetVersionResult^ m_result;
};

public ref class VolumeGetVolumeRequestedEventArgs sealed
{
public:
    VolumeGetVolumeRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property VolumeGetVolumeResult^ Result
    {
        VolumeGetVolumeResult^ get() { return m_result; }
        void set(_In_ VolumeGetVolumeResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<VolumeGetVolumeResult^>^ GetResultAsync(VolumeGetVolumeRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<VolumeGetVolumeResult^>
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
    concurrency::task_completion_event<VolumeGetVolumeResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    VolumeGetVolumeResult^ m_result;
};

public ref class VolumeGetVolumeRangeRequestedEventArgs sealed
{
public:
    VolumeGetVolumeRangeRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property VolumeGetVolumeRangeResult^ Result
    {
        VolumeGetVolumeRangeResult^ get() { return m_result; }
        void set(_In_ VolumeGetVolumeRangeResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<VolumeGetVolumeRangeResult^>^ GetResultAsync(VolumeGetVolumeRangeRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<VolumeGetVolumeRangeResult^>
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
    concurrency::task_completion_event<VolumeGetVolumeRangeResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    VolumeGetVolumeRangeResult^ m_result;
};

// Writable Properties
public ref class VolumeSetMuteRequestedEventArgs sealed
{
public:
    VolumeSetMuteRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ bool value);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property bool Value
    {
        bool get() { return m_value; }
    }

    property VolumeSetMuteResult^ Result
    {
        VolumeSetMuteResult^ get() { return m_result; }
        void set(_In_ VolumeSetMuteResult^ value) { m_result = value; }
    }

    static Windows::Foundation::IAsyncOperation<VolumeSetMuteResult^>^ GetResultAsync(VolumeSetMuteRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<VolumeSetMuteResult^>
        {
            return t;
        });
    }

    Windows::Foundation::Deferral^ GetDeferral();

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<VolumeSetMuteResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    bool m_value;
    VolumeSetMuteResult^ m_result;
};

public ref class VolumeSetVolumeRequestedEventArgs sealed
{
public:
    VolumeSetVolumeRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ int16 value);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property int16 Value
    {
        int16 get() { return m_value; }
    }

    property VolumeSetVolumeResult^ Result
    {
        VolumeSetVolumeResult^ get() { return m_result; }
        void set(_In_ VolumeSetVolumeResult^ value) { m_result = value; }
    }

    static Windows::Foundation::IAsyncOperation<VolumeSetVolumeResult^>^ GetResultAsync(VolumeSetVolumeRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<VolumeSetVolumeResult^>
        {
            return t;
        });
    }

    Windows::Foundation::Deferral^ GetDeferral();

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<VolumeSetVolumeResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    int16 m_value;
    VolumeSetVolumeResult^ m_result;
};

} } } } 
