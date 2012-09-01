/*
 Permission is hereby granted, free of charge, to any person obtaining a
 copy of this software and associated documentation files (the "Software"),
 to deal in the Software without restriction, including without limitation
 the rights to use, copy, modify, merge, publish, distribute, sublicense,
 and/or sell copies of the Software, and to permit persons to whom the
 Software is furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included
 in all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 DEALINGS IN THE SOFTWARE.
*/

#include "JNIHelp.h"
#include <android_runtime/AndroidRuntime.h>

namespace android
{
int openContentProviderFile(const String16& uri)
{
    return 0;
}
/*static*/ android_thread_id_t AndroidRuntime::createJavaThread(const char* name,
    void (*start)(void *), void* arg)
{
    return 0;
}
/*static*/ JNIEnv* AndroidRuntime::getJNIEnv()
{
    return 0;
}
AndroidRuntime* AndroidRuntime::getRuntime()
{
    return 0;
}
/*static*/ int AndroidRuntime::registerNativeMethods(JNIEnv* env, const char* className, const JNINativeMethod* gMethods, int numMethods)
{
    return 0;
}
// callStatic was in 2.3.7
#define V2_3_7 1
#if defined(PLATFORM_VERSION) && (PLATFORM_VERSION == 1)
status_t AndroidRuntime::callStatic(const char* className, const char* methodName)
{
    return NO_ERROR;
}
#endif
}   // namespace android
