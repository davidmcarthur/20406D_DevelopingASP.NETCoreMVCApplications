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
using namespace Windows::Foundation::Collections;
using namespace Windows::Devices::AllJoyn;
using namespace com::honeywell::Thermostat::LyricAsa3demo::MainInterface;
namespace com { namespace honeywell { namespace Thermostat { namespace LyricAsa3demo { namespace MainInterface {

// Methods
MainInterfaceSetTemperatureCalledEventArgs::MainInterfaceSetTemperatureCalledEventArgs(
    _In_ AllJoynMessageInfo^ info,
    _In_ double interfaceMemberTargetTemperatureTemperatureScale,
    _In_ int16 interfaceMemberInputArg)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info),
    m_interfaceMemberTargetTemperatureTemperatureScale(interfaceMemberTargetTemperatureTemperatureScale),
    m_interfaceMemberInputArg(interfaceMemberInputArg)
{
	m_result = MainInterfaceSetTemperatureResult::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ MainInterfaceSetTemperatureCalledEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &MainInterfaceSetTemperatureCalledEventArgs::Complete);
    return ref new Deferral(handler);
}

void MainInterfaceSetTemperatureCalledEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void MainInterfaceSetTemperatureCalledEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void MainInterfaceSetTemperatureCalledEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for SetTemperatureCalled.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

MainInterfaceSetTemperature68CalledEventArgs::MainInterfaceSetTemperature68CalledEventArgs(
    _In_ AllJoynMessageInfo^ info)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info)
{
	m_result = MainInterfaceSetTemperature68Result::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ MainInterfaceSetTemperature68CalledEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &MainInterfaceSetTemperature68CalledEventArgs::Complete);
    return ref new Deferral(handler);
}

void MainInterfaceSetTemperature68CalledEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void MainInterfaceSetTemperature68CalledEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void MainInterfaceSetTemperature68CalledEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for SetTemperature68Called.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

MainInterfaceSetTemperature70CalledEventArgs::MainInterfaceSetTemperature70CalledEventArgs(
    _In_ AllJoynMessageInfo^ info)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info)
{
	m_result = MainInterfaceSetTemperature70Result::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ MainInterfaceSetTemperature70CalledEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &MainInterfaceSetTemperature70CalledEventArgs::Complete);
    return ref new Deferral(handler);
}

void MainInterfaceSetTemperature70CalledEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void MainInterfaceSetTemperature70CalledEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void MainInterfaceSetTemperature70CalledEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for SetTemperature70Called.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

MainInterfaceSetTemperature72CalledEventArgs::MainInterfaceSetTemperature72CalledEventArgs(
    _In_ AllJoynMessageInfo^ info)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info)
{
	m_result = MainInterfaceSetTemperature72Result::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ MainInterfaceSetTemperature72CalledEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &MainInterfaceSetTemperature72CalledEventArgs::Complete);
    return ref new Deferral(handler);
}

void MainInterfaceSetTemperature72CalledEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void MainInterfaceSetTemperature72CalledEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void MainInterfaceSetTemperature72CalledEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for SetTemperature72Called.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

MainInterfaceSetTemperature74CalledEventArgs::MainInterfaceSetTemperature74CalledEventArgs(
    _In_ AllJoynMessageInfo^ info)
    : m_raised(false),
    m_completionsRequired(0),
    m_messageInfo(info)
{
	m_result = MainInterfaceSetTemperature74Result::CreateFailureResult(ER_NOT_IMPLEMENTED);
}

Deferral^ MainInterfaceSetTemperature74CalledEventArgs::GetDeferral()
{
    std::lock_guard<std::mutex> lockGuard(m_lock);
    if (m_raised)
    {
        // Cannot ask for a deferral after the event handler has returned.
        throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
    }

    m_completionsRequired++;
    auto handler = ref new DeferralCompletedHandler(this, &MainInterfaceSetTemperature74CalledEventArgs::Complete);
    return ref new Deferral(handler);
}

void MainInterfaceSetTemperature74CalledEventArgs::InvokeAllFinished()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        m_raised = true;
        invokeNeeded = (m_completionsRequired == 0);
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void MainInterfaceSetTemperature74CalledEventArgs::Complete()
{
    bool invokeNeeded;

    // We need to hold a lock while modifying private state, but release it before invoking a completion handler.
    {
        std::lock_guard<std::mutex> lockGuard(m_lock);
        if (m_completionsRequired == 0)
        {
            // This should never happen since Complete() should only be called by Windows.Foundation.Deferral
            // which will only invoke our completion handler once.
            throw Exception::CreateException(E_ILLEGAL_METHOD_CALL);
        }
        m_completionsRequired--;
        invokeNeeded = (m_raised && (m_completionsRequired == 0));
    }

    if (invokeNeeded)
    {
        InvokeCompleteHandler();
    }
}

void MainInterfaceSetTemperature74CalledEventArgs::InvokeCompleteHandler()
{
    if (m_result->Status == ER_NOT_IMPLEMENTED)
    {
        throw Exception::CreateException(E_NOTIMPL, "No handlers are registered for SetTemperature74Called.");
    }
    else
    {
        m_tce.set(m_result);
    }
}

// Readable Properties
// Writable Properties
} } } } } 
