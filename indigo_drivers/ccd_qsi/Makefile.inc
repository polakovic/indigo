SDK_DIR = externals/qsiapi-7.6.0

SDK_INCLUDE = -I$(SDK_DIR)/lib
SDK_LIB = -L$(SDK_DIR)/lib/.libs -lqsiapi
SDK_LIB_A = $(SDK_DIR)/lib/.libs/libqsiapi.a

MAKE_SDK = $(SDK_LIB_A)
SDK_CONFIGURE = $(SDK_DIR)/configure
CLEAN_SDK = clean_sdk

CFLAGS += -std=c11 -Wno-uninitialized -Wno-unused-variable
LDFLAGS += -lstdc++