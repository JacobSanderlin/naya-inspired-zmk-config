#pragma once

// 5 rows x 8 cols per half (10x8 combined); row1-3 col7 unused, same as the ZMK matrix transform.
#define MATRIX_ROWS 10
#define MATRIX_COLS 8

// Same physical Pro Micro pins as custom_split_left/right.overlay row-gpios (D2,D3,D4,D5,D6).
#define MATRIX_ROW_PINS { D1, D0, D4, C6, D7 }
// Col 6 moved off Arduino D7 onto the spare D8 pin, since AVR soft serial can only use D0/D1/D2/D3/D7 (E6).
#define MATRIX_COL_PINS { D3, D2, F5, F6, F7, B1, B4, F4 }

// Arduino D7 (E6) is the only free AVR-soft-serial-capable pin once the matrix/RGB claim D0-D3/D10.
#define SOFT_SERIAL_PIN E6

// Same DI pin as the ZMK led_strip (Arduino D10 / P0.09), 37 SK6812MINI-E LEDs per half.
#define WS2812_DI_PIN B6
#define RGBLIGHT_LED_COUNT 37
#define RGBLIGHT_SPLIT

#define EE_HANDS
