/*
 * sr_com.h
 *
 *  Created on: Oct 26, 2020
 *      Author:  Aaron "DaBrownDev" Brown
 */

#ifndef COMMS_SR_COMMS_COM_H_
#define COMMS_SR_COMMS_COM_H_

/* Driver Header files */
#include <ti/drivers/UART.h>

/* Helper Functions */
UART_Params xbee_uart_init(); // Fix scope


UART_Handle xbee_init();
void xbee_start();


#endif /* COMMS_SR_COMMS_COM_H_ */
