#pragma once

#include <furi.h>
#include <furi_hal.h>
#include "i2cscanner.h"

typedef struct {
    uint8_t address_idx;
    uint8_t value;
    uint8_t recv[256];
    bool must_send;
    bool sended;
    bool error;
    int bytes_to_rx;

    i2cScanner* scanner;
} i2cSender;

void i2c_send(i2cSender* i2c_sender);

i2cSender* i2c_sender_alloc();
void i2c_sender_free(i2cSender* i2c_sender);
