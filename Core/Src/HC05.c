/*
 * HC05.c
 *
 *  Created on: May 14, 2025
 *      Author: aaron
 */

#include "HC05.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

void InitializeBT(void){
	//send message from HC05. Receive message from PC. Confirm and continue.
}

void processInput(char *charBuf, int16_t *roll, int16_t *pitch, int16_t *yaw, int16_t *effort){
	   int16_t LjoyX, LjoyY, RjoyX, LT, RT;
	   if (sscanf(charBuf, "%hd,%hd,%hd,%hd,%hd", &LjoyX, &LjoyY, &RjoyX, &LT, &RT) == 4){
		   *roll = LjoyX * 1.0;
		   *pitch = LjoyY * 1.0;
		   *yaw = RjoyX * 1.0;
		   *effort = *effort + (RT *10) - (LT *10);

	   }
}
