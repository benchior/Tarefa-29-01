#include "leds.h"
#include "pico/stdlib.h"
#include "hardware/gpio.h"

#define GREEN_LED_PIN 11
#define BLUE_LED_PIN 13

void leds_init() {
    gpio_init(GREEN_LED_PIN);
    gpio_set_dir(GREEN_LED_PIN, GPIO_OUT);
    gpio_init(BLUE_LED_PIN);
    gpio_set_dir(BLUE_LED_PIN, GPIO_OUT);
}

void toggle_green_led() {
    gpio_put(GREEN_LED_PIN, !gpio_get(GREEN_LED_PIN));
}

void toggle_blue_led() {
    gpio_put(BLUE_LED_PIN, !gpio_get(BLUE_LED_PIN));
}