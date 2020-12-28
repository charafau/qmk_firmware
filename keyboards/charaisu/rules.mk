# MCU name
#MCU = cortex-m3

#ARMV = 7

#MCU_FAMILY = STM32
#MCU_SERIES = STM32F1xx

#MCU_STARTUP ?= stm32f1xx

#BOARD = STM32_F103_STM32DUINO

#USE_FPU ?= no

# Options to pass to dfu-util when flashing
#DFU_ARGS ?= -d 0483:DF11 -a 0 -s 0x08000000:leave
#DFU_SUFFIX_ARGS ?= -v 0483 -p DF11

# MCU name
MCU = STM32F103

# Bootloader selection
BOOTLOADER = stm32duino

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE


# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = lite     # Virtual DIP switch configuration
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = yes      # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes           # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
MIDI_ENABLE = no            # MIDI support
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
AUDIO_ENABLE = no           # Audio output
FAUXCLICKY_ENABLE = no      # Use buzzer to emulate clicky switches
