/**
 * Copyright (c) 2016 - 2020, Nordic Semiconductor ASA
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form, except as embedded into a Nordic
 *    Semiconductor ASA integrated circuit in a product or a software update for
 *    such product, must reproduce the above copyright notice, this list of
 *    conditions and the following disclaimer in the documentation and/or other
 *    materials provided with the distribution.
 *
 * 3. Neither the name of Nordic Semiconductor ASA nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * 4. This software, with or without modification, must only be used with a
 *    Nordic Semiconductor ASA integrated circuit.
 *
 * 5. Any software provided in binary form under this license must not be reverse
 *    engineered, decompiled, modified and/or disassembled.
 *
 * THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
#ifndef ARDUINO_NANO_33_BLE_H
#define ARDUINO_NANO_33_BLE_H

#ifdef __cplusplus
extern "C" {
#endif

// LEDs definitions
#define LEDS_NUMBER    5

#define LED_1          (32 * 0 + 13)
#define LED_PWR        (32 * 1 + 9)
#define LED_RED        (32 * 0 + 24)
#define LED_GREEN      (32 * 0 + 16)
#define LED_BLUE       (32 * 0 + 06)

#define LEDS_ACTIVE_STATE 0

#define LEDS_LIST {LED_1, LED_PWR, LED_RED, LED_GREEN, LED_BLUE}

#define BSP_LED_0      LED_1
#define BSP_LED_1      LED_PWR

#define LEDS_INV_MASK  0

#define BUTTONS_NUMBER 0

#define BUTTONS_ACTIVE_STATE 0

#define RX_PIN_NUMBER  (32 * 1 + 10)
#define TX_PIN_NUMBER  (32 * 1 + 3)
#define CTS_PIN_NUMBER UART_PIN_DISCONNECTED
#define RTS_PIN_NUMBER UART_PIN_DISCONNECTED
#define HWFC           false

// Arduino board mappings
#define ARDUINO_SCL_PIN              2    // SCL signal pin
#define ARDUINO_SDA_PIN             31    // I2C SDA signal pin
#define ARDUINO_AREF_PIN             3    // Aref pin

//digital pins
#define ARDUINO_13_PIN              13    // SPI SCK
#define ARDUINO_12_PIN              40    // SPI MISO
#define ARDUINO_11_PIN              33    // SPI MOSI
#define ARDUINO_10_PIN              22    // CS, pin number not sure
#define ARDUINO_9_PIN               20    // IFX I2C VDD, pin number not sure
#define ARDUINO_8_PIN               19    // not sure
#define ARDUINO_7_PIN               18    // optiga pin RST, not sure
#define ARDUINO_6_PIN               17    // not sure
#define ARDUINO_5_PIN               16    // not sure
#define ARDUINO_4_PIN               15    // not sure
#define ARDUINO_3_PIN               14    // not sure
#define ARDUINO_2_PIN               13    // not sure
#define ARDUINO_1_PIN               12    // not used
#define ARDUINO_0_PIN               11    // not used

//analog channels
#define ARDUINO_A0_PIN              (32 * 0 + 24)     // Analog channel 0
#define ARDUINO_A1_PIN              (32 * 0 + 5)     // Analog channel 1
#define ARDUINO_A2_PIN              (32 * 0 + 30)    // Analog channel 2
#define ARDUINO_A3_PIN              (32 * 0 + 29)    // Analog channel 3
#define ARDUINO_A4_PIN              (32 * 0 + 31)    // Analog channel 4, SDA
#define ARDUINO_A5_PIN              (32 * 0 + 2)    // Analog channel 5, SCL
#define ARDUINO_A6_PIN              (32 * 0 + 28)    // Analog channel 6
#define ARDUINO_A7_PIN              (32 * 0 + 3)    // Analog channel 7

#ifdef __cplusplus
}
#endif

#endif // ARDUINO_NANO_33_BLE_H
