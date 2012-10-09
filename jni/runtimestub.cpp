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
#include <android/log.h>
#include "android_view_InputChannel.h"
#include "android_os_MessageQueue.h"
#include "android_view_PointerIcon.h"
#include "gui/Surface.h"
#include "camera/Camera.h"
#include "android/graphics/GraphicsJNI.h"
#include <androidfw/InputDevice.h>

static int dummyitem;
static jclass dummyFindClass(JNIEnv *env, const char* name)
{
    __android_log_print( ANDROID_LOG_INFO, "", "dummyFindClass(%s)", name );
    return (jclass) &dummyitem;
}
static jmethodID dummyGetStaticMethodID(JNIEnv *env, jclass clazz, const char* name, const char* sig)
{
    __android_log_print( ANDROID_LOG_INFO, "", "dummyGetStaticMethodID(%s, %s)", name, sig);
    return (jmethodID) &dummyitem;
}
static void dummyCallStaticVoidMethod(JNIEnv *env, jclass clazz, jmethodID methodID, ...)
{
    __android_log_print( ANDROID_LOG_INFO, "", "dummyCallStaticVoidMethod()" );
}
static void dummyCallStaticVoidMethodV(JNIEnv*, jclass, jmethodID, va_list)
{
    __android_log_print( ANDROID_LOG_INFO, "", "dummyCallStaticVoidMethodV()" );
}

static struct JNINativeInterface dummyJNINativeInterface;
static JNIEnv dummyJNIEnv;
namespace android {
int openContentProviderFile(const String16& uri)
{
    return 0;
}
AndroidRuntime::AndroidRuntime()
{
}
/*static*/ android_thread_id_t AndroidRuntime::createJavaThread(const char* name,
    void (*start)(void *), void* arg)
{
    return 0;
}
/*static*/ JNIEnv* AndroidRuntime::getJNIEnv()
{
    dummyJNINativeInterface.FindClass=dummyFindClass;
    dummyJNINativeInterface.GetStaticMethodID=dummyGetStaticMethodID;
    dummyJNINativeInterface.CallStaticVoidMethod=dummyCallStaticVoidMethod;
    dummyJNINativeInterface.CallStaticVoidMethodV=dummyCallStaticVoidMethodV;
    dummyJNIEnv.functions=&dummyJNINativeInterface;
    return &dummyJNIEnv;
}
AndroidRuntime* AndroidRuntime::getRuntime()
{
    return 0;
}
/*static*/ int AndroidRuntime::registerNativeMethods(JNIEnv* env, const char* className, const JNINativeMethod* gMethods, int numMethods)
{
    return 0;
}
// callStatic was in 2.3
#define V2_3_0 1
#define V2_3_1 1
#define V2_3_2 1
#define V2_3_3 1
#define V2_3_4 1
#define V2_3_5 1
#define V2_3_6 1
#define V2_3_7 1
#if defined(PLATFORM_VERSION) && (PLATFORM_VERSION == 1)
status_t AndroidRuntime::callStatic(const char* className, const char* methodName)
{
    return NO_ERROR;
}
#endif
#if 0
#include <input/InputApplication.h>
#include <input/InputWindow.h>
#include <androidfw/PowerManager.h>
#include "JNIHelp.h"
#include "jni.h"

extern sp<InputApplicationHandle> android_server_InputApplicationHandle_getHandle(
        JNIEnv* env, jobject inputApplicationHandleObj);
extern sp<NativeInputWindowHandle> android_server_InputWindowHandle_getHandle(JNIEnv* env, jobject inputWindowHandleObj);
extern bool android_server_PowerManagerService_isScreenOn();
extern bool android_server_PowerManagerService_isScreenBright();
extern void android_server_PowerManagerService_userActivity(nsecs_t eventTime, int32_t eventType);
extern void android_server_PowerManagerService_goToSleep(nsecs_t eventTime);
#endif
sp<MessageQueue> android_os_MessageQueue_getMessageQueue( JNIEnv* env, jobject messageQueueObj)
{
return 0;
}
Parcel* parcelForJavaObject(JNIEnv* env, jobject obj)
{
return 0;
}
jobject createJavaParcelObject(JNIEnv* env)
{
return 0;
}
void recycleJavaParcelObject(JNIEnv* env, jobject object)
{
}
sp<InputChannel> android_view_InputChannel_getInputChannel(JNIEnv* env, jobject inputChannelObj)
{
return 0;
}
void android_view_InputChannel_setDisposeCallback(JNIEnv* env, jobject inputChannelObj, InputChannelObjDisposeCallback callback, void* data)
{
}
jobject android_view_InputDevice_create(JNIEnv* env, const InputDeviceInfo& deviceInfo)
{
return 0;
}
jobject android_view_KeyEvent_fromNative(JNIEnv* env, const KeyEvent* event)
{
return 0;
}
status_t android_view_KeyEvent_toNative(JNIEnv* env, jobject eventObj, KeyEvent* event)
{
return 0;
}
status_t android_view_KeyEvent_recycle(JNIEnv* env, jobject eventObj)
{
return 0;
}
jobject android_view_MotionEvent_obtainAsCopy(JNIEnv* env, const MotionEvent* event)
{
return 0;
}
MotionEvent* android_view_MotionEvent_getNativePtr(JNIEnv* env, jobject eventObj)
{
return 0;
}
status_t android_view_PointerIcon_load(JNIEnv* env, jobject pointerIconObj, jobject contextObj, PointerIcon* outPointerIcon)
{
return 0;
}
status_t android_view_PointerIcon_loadSystemIcon(JNIEnv* env, jobject contextObj, int32_t style, PointerIcon* outPointerIcon)
{
return 0;
}
SkRegion* android_graphics_Region_getSkRegion(JNIEnv* env, jobject regionObj)
{
return 0;
}
AndroidRuntime::~AndroidRuntime()
{
}
status_t AndroidRuntime::callMain(const char* className, jclass clazz, int argc, const char* const argv[])
{
return 0;
}
char* AndroidRuntime::toSlashClassName(const char* className)
{
return 0;
}
int AndroidRuntime::addVmArguments(int argc, const char* const argv[])
{
return 0;
}
void AndroidRuntime::start(const char *classname, const char* options)
{
}
void AndroidRuntime::onVmCreated(JNIEnv* env)
{
}
sp<Surface> Surface_getSurface(JNIEnv* env, jobject thiz)
{
return 0;
}
}; // namespace android

SkBitmap* GraphicsJNI::getNativeBitmap(JNIEnv* env, jobject bitmap)
{
return 0;
}
using namespace android;
sp<Camera> get_native_camera(JNIEnv *env, jobject thiz, struct JNICameraContext** pContext)
{
return 0;
}
