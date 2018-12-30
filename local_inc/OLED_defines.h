/*
 * helper for OLED_C SEPS114A rev 1.0
 */


#ifndef OLED_DEFINES_H_
#define OLED_DEFINES_H_

#define Display_Soft_Reset_LOW 0x00
#define Display_Soft_Reset_HIGH 0xFF
#define RST_PIN GPIO_PIN_7


#define SOFT_RESET 0x01
#define DISPLAY_ON_OFF 0x02
#define ANALOG_CONTROL 0x0F
#define STANDBY_ON_OFF 0x14
#define OSC_ADJUST 0x1A
#define ROW_SCAN_DIRECTION 0x09
#define DISPLAY_X1 0x30
#define DISPLAY_X2 0x31
#define DISPLAY_Y1 0x32
#define DISPLAY_Y2 0x33
#define DISPLAYSTART_X 0x38
#define DISPLAYSTART_Y 0x39
#define CPU_IF 0x0D
#define MEM_X1 0x34
#define MEM_X2 0x35
#define MEM_Y1 0x36
#define MEM_Y2 0x37
#define MEMORY_WRITE_READ 0x1D
#define RAM_DATA_ACCESS_PORT 0x08
#define DISCHARGE_TIME 0x18
#define PEAK_PULSE_DELAY 0x16
#define PEAK_PULSE_WIDTH_R 0x3A
#define PEAK_PULSE_WIDTH_G 0x3B
#define PEAK_PULSE_WIDTH_B 0x3C
#define PRECHARGE_CURRENT_R 0x3D
#define PRECHARGE_CURRENT_G 0x3E
#define PRECHARGE_CURRENT_B 0x3F
#define COLUMN_CURRENT_R 0x40
#define COLUMN_CURRENT_G 0x41
#define COLUMN_CURRENT_B 0x42
#define ROW_OVERLAP 0x48
#define SCAN_OFF_LEVEL 0x49
#define ROW_SCAN_ON_OFF 0x17
#define ROW_SCAN_MODE 0x13
#define SCREEN_SAVER_CONTEROL 0xD0
#define SS_SLEEP_TIMER 0xD1
#define SCREEN_SAVER_MODE 0xD2
#define SS_UPDATE_TIMER 0xD3
#define RGB_IF 0xE0
#define RGB_POL 0xE1
#define DISPLAY_MODE_CONTROL 0xE5

#endif
