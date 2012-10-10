
#include "JNIHelp.h"
#include "android/native_window.h"

extern "C" {
ANativeWindow* ANativeWindow_fromSurface(JNIEnv* env, jobject surface)
{
return 0;
}
void ANativeWindow_release(ANativeWindow* window)
{
}
int32_t ANativeWindow_setBuffersGeometry(ANativeWindow* window, int32_t width, int32_t height, int32_t format)
{
return 0;
}
}
