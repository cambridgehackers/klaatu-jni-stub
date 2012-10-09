
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
}
