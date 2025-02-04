#include "pico/stdlib.h"
#include "uart.h"
#include "i2c.h"
#include "ws2812.h"
#include "ssd1306.h"
#include "buttons.h"
#include "leds.h"

int main() {
    stdio_init_all();

    uart_init();
    i2c_init();
    ws2812_init();
    ssd1306_init();
    buttons_init();
    leds_init();

    while (true) {
        // Loop principal
    }
}