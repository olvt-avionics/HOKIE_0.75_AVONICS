/*
 * dbg_usb.h
 *
 *  Created on: Mar 1, 2021
 *      Author: toocr
 */

#ifndef COMMS_DEBUG_DBG_USB_H_
#define COMMS_DEBUG_DBG_USB_H_
/* Driver Header files */
#include <ti/drivers/UART.h>

/* Helper Functions */
UART_Params dbg_uart_params_init(); // Fix scope


UART_Handle dbg_init();
void dbg_start();

#endif /* COMMS_DEBUG_DBG_USB_H_ */
