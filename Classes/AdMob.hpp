#ifndef AdMob_h
#define AdMob_h

#include "base/ccConfig.h"
#include "jsapi.h"
#include "jsfriendapi.h"
#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
#include "platform/android/jni/JniHelper.h"
#include <jni.h>
#endif
#include "firebase/admob/types.h"

void register_all_admob_framework(JSContext* cx, JS::HandleObject obj);
firebase::admob::AdParent getAdParent();

#endif /* AdMob_h */
