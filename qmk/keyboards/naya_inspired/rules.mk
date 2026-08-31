# QMK port of the ZMK custom_split shield, wired (ATmega32U4 Pro Micro) split build.
MCU = atmega32u4
BOOTLOADER = caterina

SPLIT_KEYBOARD = yes
# One-time `qmk flash ... -bl avrdude-split-left/-right` (or EEPROM write) needed per half to set handedness.
EE_HANDS = yes

RGBLIGHT_ENABLE = yes
WS2812_DRIVER = bitbang

# QMK's bundled AVR ws2812_bitbang.c trips -Werror=unused-but-set-parameter on newer avr-gcc.
EXTRAFLAGS += -Wno-error=unused-but-set-parameter
