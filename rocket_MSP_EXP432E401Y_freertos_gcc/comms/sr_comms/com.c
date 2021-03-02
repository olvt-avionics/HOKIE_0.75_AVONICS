/*
 * com.c
 *
 *  Created on: Oct 26, 2020
 *      Author: toocr
 */

#include "com.h"
static void read_callback_xbee(UART_Handle handle, void *rxBuf, size_t size){

}

static void write_callback_xbee(UART_Handle handle, void *rxBuf, size_t size){

}

UART_Params xbee_uart_init(){
    UART_Params uart_config;
    UART_init();

    UART_Params_init(&uart_config);
    uart_config.writeDataMode = UART_DATA_BINARY;
    uart_config.readDataMode = UART_DATA_BINARY;
    uart_config.readReturnMode = UART_RETURN_FULL;
    uart_config.baudRate = 115200;
    return uart_config;
}

UART_Params com_init(){
    UART_Params uart_config = xbee_uart_init();
    UART_Handle uart = UART_open(XBEE_UART, &uartParams); // XBEE_UART comes from sysconfig
    if (uart == NULL) {
        /* UART_open() failed */
        while (1);
    }
}

void com_start(){
    UART_Handle uart;
    UART_Params uart_config = xbee_uart_init();
    uart = UART_open(XBEE_UART, uart_config);

    if (uart == NULL) {
        /* UART_open() failed */
        while (1);
    }

    UART_write(uart, "Initialized XBee Communications!", 1);
}
