
#pragma once


#include <set>
#include <vector>
#include <functional>

#include <glscbinding/glscbinding_api.h>
#include <glscbinding/glscbinding_features.h>

#include <glscbinding/ContextHandle.h>
#include <glscbinding/CallbackMask.h>
#include <glscbinding/ProcAddress.h>


namespace glscbinding
{


class AbstractFunction;
class FunctionCall;


using SimpleFunctionCallback = std::function<void(const AbstractFunction &)>;
using FunctionCallback = std::function<void(const FunctionCall &)>;
using FunctionLogCallback = std::function<void(FunctionCall *)>;
using ContextSwitchCallback = std::function<void(ContextHandle)>;   ///< The signature of the context switch callback

GLSCBINDING_API void initialize(glscbinding::GetProcAddress functionPointerResolver, bool resolveFunctions = true);
GLSCBINDING_API void registerAdditionalFunction(AbstractFunction * function);
GLSCBINDING_API ProcAddress resolveFunction(const char * name);
GLSCBINDING_API void resolveFunctions();

GLSCBINDING_API void setCallbackMask(CallbackMask mask);
GLSCBINDING_API void setCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);
GLSCBINDING_API void addCallbackMask(CallbackMask mask);
GLSCBINDING_API void addCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);
GLSCBINDING_API void removeCallbackMask(CallbackMask mask);
GLSCBINDING_API void removeCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);
GLSCBINDING_API SimpleFunctionCallback unresolvedCallback();
GLSCBINDING_API void setUnresolvedCallback(SimpleFunctionCallback callback);
GLSCBINDING_API FunctionCallback beforeCallback();
GLSCBINDING_API void setBeforeCallback(FunctionCallback callback);
GLSCBINDING_API FunctionCallback afterCallback();
GLSCBINDING_API void setAfterCallback(FunctionCallback callback);
GLSCBINDING_API FunctionLogCallback logCallback();
GLSCBINDING_API void setLogCallback(FunctionLogCallback callback);

GLSCBINDING_API void addContextSwitchCallback(ContextSwitchCallback callback);
GLSCBINDING_API void initialize(ContextHandle context, glscbinding::GetProcAddress functionPointerResolver, bool useContext = true, bool resolveFunctions = true);
GLSCBINDING_API void useCurrentContext();
GLSCBINDING_API void useContext(ContextHandle context);
GLSCBINDING_API void releaseCurrentContext();
GLSCBINDING_API void releaseContext(ContextHandle context);


} // namespace glscbinding
