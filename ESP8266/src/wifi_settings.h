#ifndef _WIFI_h
#define _WIFI_h

#include "setup.h"

#include <Arduino.h>
#include <WiFiClient.h>
#include "master_i2c.h"

#define FAKE_CRC 0x0105

/*
подсчет контрольной суммы
*/
uint32_t crc32 (const void* data, size_t length, uint32_t crc = 0xffffffff);

/*
Сохраняем конфигурацию в EEPROM
*/
void storeConfig(Settings &sett);

/*
Читаем конфигурацию из EEPROM
*/
bool loadConfig(Settings &sett);

#endif

