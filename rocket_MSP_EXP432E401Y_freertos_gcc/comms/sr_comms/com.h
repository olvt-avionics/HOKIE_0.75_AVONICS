/*
 * com.h
 *
 *  Created on: Oct 26, 2020
 *      Author: toocr
 */

#ifndef COMMS_SR_COMMS_COM_H_
#define COMMS_SR_COMMS_COM_H_

/* Driver Header files */
#include <ti/drivers/GPIO.h>
#include <ti/drivers/UART.h>

/* Helper Functions */
UART_Params xbee_uart_init();


void com_init();
void com_start();


#endif /* COMMS_SR_COMMS_COM_H_ */
