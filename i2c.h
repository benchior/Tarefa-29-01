#ifndef I2C_H
#define I2C_H

void i2c_init();
void i2c_write(uint8_t addr, uint8_t *data, uint16_t len);

#endif