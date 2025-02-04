#include "buttons.h"
#include "pico/stdlib.h"
#include "hardware/gpio.h"

#define BUTTON_A_PIN 5
#define BUTTON_B_PIN 6

void buttons_init() {
    gpio_init(BUTTON_A_PIN);
    gpio_set_dir(BUTTON_A_PIN, GPIO_IN);
    gpio_pull_up(BUTTON_A_PIN);
    gpio_set_irq_enabled_with_callback(BUTTON_A_PIN, GPIO_IRQ_EDGE_FALL, true, &button_a_isr);

    gpio_init(BUTTON_B_PIN);
    gpio_set_dir(BUTTON_B_PIN, GPIO_IN);
    gpio_pull_up(BUTTON_B_PIN);
    gpio_set_irq_enabled_with_callback(BUTTON_B_PIN, GPIO_IRQ_EDGE_FALL, true, &button_b_isr);
}

void button_a_isr() {
    // Tratamento da interrupção do botão A
}

void button_b_isr() {
    // Tratamento da interrupção do botão B
}