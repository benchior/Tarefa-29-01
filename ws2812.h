#ifndef WS2812_H
#define WS2812_H

#include <stdint.h>

void ws2812_init();
void ws2812_set_pixel(uint8_t row, uint8_t col, uint8_t r, uint8_t g, uint8_t b);
void ws2812_show();

#endif