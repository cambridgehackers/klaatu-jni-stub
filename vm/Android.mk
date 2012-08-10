#
# Permission is hereby granted, free of charge, to any person obtaining a
# copy of this software and associated documentation files (the "Software"),
# to deal in the Software without restriction, including without limitation
# the rights to use, copy, modify, merge, publish, distribute, sublicense,
# and/or sell copies of the Software, and to permit persons to whom the
# Software is furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included
# in all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
# OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
# THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
# DEALINGS IN THE SOFTWARE.

LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_CFLAGS += -fstrict-aliasing -Wstrict-aliasing=2 -fno-align-jumps
LOCAL_CFLAGS += -Wall -Wextra -Wno-unused-parameter
LOCAL_CFLAGS += -DDVM_SHOW_EXCEPTION=1

LOCAL_SRC_FILES := jnistub.cpp

WITH_COPYING_GC := $(strip $(WITH_COPYING_GC))
WITH_JIT := $(strip $(WITH_JIT))

LOCAL_C_INCLUDES += \
	$(JNI_H_INCLUDE) \
	dalvik \
	dalvik/vm \
	external/zlib \

MTERP_ARCH_KNOWN := false
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE := libdvm
include $(BUILD_SHARED_LIBRARY)
