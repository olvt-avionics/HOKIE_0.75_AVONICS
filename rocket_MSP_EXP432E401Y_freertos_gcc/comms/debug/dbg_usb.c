/*
 * dbg_usb.c
 *
 *  Created on: Mar 1, 2021
 *      Author: toocr
 */


#include "dbg_usb.h"
#include "ti_drivers_config.h"

UART_Params dbg_uart_params_init(){
    UART_Params uart_config;
    UART_init();

    UART_Params_init(&uart_config);
    uart_config.writeDataMode = UART_DATA_BINARY;
    uart_config.readDataMode = UART_DATA_BINARY;
    uart_config.readReturnMode = UART_RETURN_FULL;
    uart_config.baudRate = 115200;
    return uart_config;
}

UART_Handle dbg_init(){
    UART_Params uart_config = dbg_uart_params_init();
    UART_Handle uart = UART_open(USB_UART_0, &uart_config); // XBEE_UART comes from sysconfig
    if (uart == NULL) {
        /* UART_open() failed */
        while (1);
    }
    return uart;
}

void dbg_start(){
    UART_Handle uart;
    uart = dbg_init();
    UART_write(uart, "Initialized USB Debugging.", 1);
}
