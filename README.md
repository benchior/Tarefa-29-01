# Projeto BitDogLab - Controle de LEDs e Display com RP2040

Este projeto foi desenvolvido como parte de um estudo prático sobre o uso de interfaces de comunicação serial (UART e I2C) e controle de hardware no microcontrolador RP2040, utilizando a placa de desenvolvimento BitDogLab. O projeto combina o uso de LEDs comuns, LEDs endereçáveis WS2812, botões de acionamento e um display SSD1306 para criar uma aplicação interativa.

## Funcionalidades

1. **Exibição de caracteres no display SSD1306**:
   - Caracteres digitados no Serial Monitor são exibidos no display.
   - Números de 0 a 9 exibem um símbolo correspondente na matriz de LEDs WS2812.

2. **Controle de LEDs RGB**:
   - Botão A alterna o estado do LED verde.
   - Botão B alterna o estado do LED azul.
   - O estado dos LEDs é exibido no display e enviado ao Serial Monitor.

3. **Uso de interrupções e debouncing**:
   - As funcionalidades dos botões são implementadas usando interrupções.
   - O bouncing dos botões é tratado via software.

4. **Comunicação serial (UART)**:
   - O projeto utiliza a UART para receber caracteres do Serial Monitor e enviar mensagens de status.

## Componentes Utilizados

- **Matriz 5x5 de LEDs WS2812** (conectada à GPIO 7).
- **LED RGB** (conectado às GPIOs 11, 12 e 13).
- **Botão A** (conectado à GPIO 5).
- **Botão B** (conectado à GPIO 6).
- **Display SSD1306** (conectado via I2C, GPIOs 14 e 15).
