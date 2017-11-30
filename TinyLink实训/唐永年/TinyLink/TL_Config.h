#ifndef TL_CONFIG_H
#define TL_CONFIG_H
#include "TL_Device_ID.h"
#define PLATFORM 1
#define BOARD 1002
#define TIME ARDUINO_TIME
#define WIFI ESP8266
#define WIFI_UART_RX 1
#define WIFI_UART_TX 0
#define LIGHT GROVE_LIGHT
#define LIGHT_ANALOG A0
#define TEMPERATURE DHT11
#define TEMPERATURE_DIGITAL_INPUT 3
#define TEMPERATURE_DIGITAL_OUTPUT 2
#define SOIL_HUMIDITY SOIL_MOISTURE_ANALOG
#define SOIL_HUMIDITY_ANALOG A2

#define FAN_DIGITAL_PIN 8 //edited by Yongnian
#define FAN GROVE_MINI_FAN //edited by Yongnian
#define ACCELEROMETER MBED_MPU6050 //edited by Yongnian

#endif
