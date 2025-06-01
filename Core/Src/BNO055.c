/*
 * BNO055.c
 *
 *  Created on: May 17, 2025
 *      Author: aaron
 */
#include "BNO055.h"
#include "stm32f4xx_hal.h"   // Needed for HAL types

extern I2C_HandleTypeDef hi2c1;

void BNO_Init(void){
	uint8_t ndof_buf = 0x0C;
	HAL_I2C_Mem_Write(&hi2c1, BNO055_I2C_ADDR, BNO055_OPR_MODE_ADDR,
	                  I2C_MEMADD_SIZE_8BIT, &ndof_buf, 1, 100); //
	HAL_Delay(20);
}

void BNO_Read(int16_t *roll, int16_t *pitch, int16_t *yaw){
	uint8_t eulerData[6];
	HAL_I2C_Mem_Read(&hi2c1, BNO055_I2C_ADDR, BNO055_EULER_LSB, I2C_MEMADD_SIZE_8BIT, eulerData, 6, 100);

    *yaw = (int16_t)((eulerData[1] << 8) | eulerData[0]); //collect two byte from eulData
    *roll = (int16_t)((eulerData[3] << 8) | eulerData[2]);
    *pitch = (int16_t)((eulerData[5] << 8) | eulerData[4]);




}
