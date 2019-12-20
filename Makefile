target = appletv:12.1
DEBUG=0
include $(THEOS)/makefiles/common.mk

INSTALL_TARGET_PROCESSES = TVSystemMenuService 

BUNDLE_NAME = Bluetooth

Bluetooth_FILES = CCBTBluetoothModule.m
Bluetooth_INSTALL_PATH = /Library/TVSystemMenuModules
Bluetooth_FRAMEWORKS = UIKit
Bluetooth_PRIVATE_FRAMEWORKS = TVSystemMenuUI CoreServices
Bluetooth_CFLAGS = -fobjc-arc  -F. -I.
Bluetooth_LDFLAGS +=  -F. -I.

include $(THEOS_MAKE_PATH)/bundle.mk

internal-stage::
	$(ECHO_NOTHING)mkdir -p $(THEOS_STAGING_DIR)/Library/TVSystemMenuModules$(ECHO_END)
	
