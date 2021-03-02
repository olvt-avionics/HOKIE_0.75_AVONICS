/*
 * sr_com.c
 *
 *  Created on: Oct 26, 2020
 *      Author: Aaron "DaBrownDev" Brown
 */

#include "sr_com.h"
#include "ti_drivers_config.h"



UART_Params xbee_uart_params_init(){
    UART_Params uart_config;
    UART_init();

    UART_Params_init(&uart_config);
    uart_config.writeDataMode = UART_DATA_BINARY;
    uart_config.readDataMode = UART_DATA_BINARY;
    uart_config.readReturnMode = UART_RETURN_FULL;
    uart_config.baudRate = 115200;
    return uart_config;
}

UART_Handle xbee_init(){
    UART_Params uart_config = xbee_uart_params_init();
    UART_Handle uart = UART_open(XBEE_UART, &uart_config); // XBEE_UART comes from sysconfig
    
    if (uart == NULL) {
        /* UART_open() failed */
        while (1);
    }
    
    return uart;
}

void xbee_start(){
    UART_Handle uart  = xbee_init(); // Check to see if this works.
    UART_write(uart, "Initialized XBee Communications!", 1);
}
