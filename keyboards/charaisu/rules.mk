# MCU name
MCU = STM32F401

# Address of the bootloader in system memory

STM32_BOOTLOADER_ADDRESS = 0x1FFF0000

# Build Options
#   change yes to no to disable
#
# BOOTMAGIC_ENABLE = full     # Virtual DIP switch configuration
# 3MOUSEKEY_ENABLE = yes     # Mouse keys
# EXTRAKEY_ENABLE = yes      # Audio control and System control
# CONSOLE_ENABLE = yes         # Console for debug
# COMMAND_ENABLE = yes         # Commands for debug and configuration
# # Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
# SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# # if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
# NKRO_ENABLE = yes           # USB Nkey Rollover
# BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
# RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
# MIDI_ENABLE = no            # MIDI support
# BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
# AUDIO_ENABLE = no           # Audio output
# FAUXCLICKY_ENABLE = no      # Use buzzer to emulate clicky switches

BOOTMAGIC_ENABLE = full     # Virtual DIP switch configuration
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
KEYBOARD_SHARED_EP = yes
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes           # USB Nkey Rollover
BACKLIGHT_ENABLE = no     # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
BLUETOOTH_ENABLE = no       # Enable Bluetooth
AUDIO_ENABLE = no           # Audio output

