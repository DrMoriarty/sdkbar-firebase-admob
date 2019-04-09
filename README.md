# Description

Firebase AdMob plugin for sdkbar.

# Installation

`sdkbar -i https://github.com/OrangeAppsRu/sdkbar-firebase-admob`

# Dependencies

- sdkbar-utils (https://github.com/OrangeAppsRu/sdkbar-utils)
- sdkbar-firebase (https://github.com/OrangeAppsRu/sdkbar-firebase)

# Plugin JS interface

- `admob.init(advertising_id)`
- `admob.add_test_device(device_id)` use utils.DeviceIdMd5() to take this identifier
- `admob.load_banner(ad_id, callback_function, callback_this)`
- `admob.is_banner_loaded()` returns bool
- `admob.show_banner(callback_function, callback_this)`
- `admob.close_banner()`
- `admob.load_interstitial(ad_id, callback_function, callback_this)`
- `admob.is_interstitial_loaded()` returns bool
- `admob.show_interstitial(callback_function, callback_this)`
- `admob.load_rewarded(ad_id, callback_function, callback_this)`
- `admob.is_rewarded_loaded()` returns bool
- `admob.show_rewarded(callback_function, callback_this)`

