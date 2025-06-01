/*
 * ESC.c
 *
 *  Created on: May 20, 2025
 *      Author: aaron
 */


#include "ESC.h"
#include "stm32f4xx_hal.h"   // Needed for HAL types
#include <stdint.h>
extern TIM_HandleTypeDef htim3;

void update_Motors(int16_t roll_effort, int16_t pitch_effort, int16_t yaw_effort, int16_t effor_set){ //Compare 3200 = 1ms (0%)    Compare 6400 = 2ms (100%)
	int16_t A =  pitch_effort  +roll_effort  +yaw_effort  +effor_set;
	int16_t B = -pitch_effort  +roll_effort  -yaw_effort  +effor_set;
	int16_t C = -pitch_effort  -roll_effort  +yaw_effort  +effor_set;
	int16_t D =  pitch_effort  -roll_effort  -yaw_effort  +effor_set;


    // Clamp between 3200 and 5000
    if (A < 3200) A = 3200;
    if (A > 5000) A = 5000;

    if (B < 3200) B = 3200;
    if (B > 5000) B = 5000;

    if (C < 3200) C = 3200;
    if (C > 5000) C = 5000;

    if (D < 3200) D = 3200;
    if (D > 5000) D = 5000;


	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, A);
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, B);
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, C);
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, D);
}
