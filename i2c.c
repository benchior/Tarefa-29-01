#include "i2c.h"
#include "pico/stdlib.h"
#include "hardware/i2c.h"

#define I2C_PORT i2c0
#define I2C_SDA_PIN 14
#define I2C_SCL_PIN 15

void i2c_init() {
    i2c_init(I2C_PORT, 100 * 1000);
    gpio_set_function(I2C_SDA_PIN, GPIO_FUNC_I2C);
    gpio_set_function(I2C_SCL_PIN, GPIO_FUNC_I2C);
    gpio_pull_up(I2C_SDA_PIN);
    gpio_pull_up(I2C_SCL_PIN);
}

void i2c_write(uint8_t addr, uint8_t *data, uint16_t len) {
    i2c_write_blocking(I2C_PORT, addr, data, len, false);
}