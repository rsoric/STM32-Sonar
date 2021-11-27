/*
 * HCSR04.h
 *
 *  Created on: 15. stu 2021.
 *      Author: rsoric
 *
 *      This is the header file of the driver written for generating PWM to drive a servo using the STM32F429I-DISC1 devboard.
 *
 *
 */

#ifndef APPLICATION_USER_PWM_H_
#define APPLICATION_USER_PWM_H_

#include "main.h"
#include "stm32f4xx_hal_tim.h"
#include "cmsis_os2.h"

/*
 * PWM Struct
 */

typedef struct{
	TIM_HandleTypeDef	PWM_Timer_Handle;
	TIM_TypeDef * 		PWM_Timer_Instance;
	uint16_t 			PWM_Timer_Channel;

	uint8_t				periodInMicroSeconds;
	uint8_t				pulseLengthInMicroSeconds;

}PWM;


void PWM_init(
		PWM * 				dev,
		TIM_TypeDef * 		PWM_Timer_Instance,
		uint16_t 			PWM_Timer_Channel,
		GPIO_TypeDef * 		PWM_GPIO_Port,
		uint16_t 			PWM_GPIO_Pin);

void PWM_setPulse(
		PWM * 				dev,
		uint32_t			pulse);

#endif /* APPLICATION_USER_PWM_H_ */
