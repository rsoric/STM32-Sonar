/*
 * HCSR04.c
 *
 *  Created on: 15. stu 2021.
 *      Author: rsoric
 */

#include "HCSR04.h"
#include "main.h"
#include "stm32f4xx_hal_def.h"
#include "cmsis_os.h"

extern TIM_HandleTypeDef htim14;

/*
 *
 * Function for sending the trigger
 */
void HCSR04_SendTrigger(HCSR04* dev){
	HAL_GPIO_WritePin(dev->Trigger_GPIO_Port,dev->Trigger_GPIO_Pin,GPIO_PIN_SET);

	/*
	 * This for loop is used to create a 10uS delay. vTaskDelay(1) creates a 1000uS delay.
	 * After testing different methods, this turned out to be the best option.
	 */
	for(int i = 0; i<10; i++)
	{
		vTaskDelay(0);
	}
	HAL_GPIO_WritePin(dev->Trigger_GPIO_Port,dev->Trigger_GPIO_Pin,GPIO_PIN_RESET);
}


void HCSR04_init(
		HCSR04 * 			dev,
		GPIO_TypeDef * 		Trigger_GPIO_Port,
		uint16_t 			Trigger_GPIO_Pin,
		TIM_HandleTypeDef*	ECHO_Timer_Handle,
		uint16_t 			ECHO_Timer_Channel
		)
{

	/*
	 *
	 * Initialize the timer for capturing the length of the ECHO signal
	 *
	 */

	dev->ECHO_Timer_Handle = ECHO_Timer_Handle;
	dev->ECHO_Timer_Channel = ECHO_Timer_Channel;

	__HAL_TIM_ENABLE_IT(dev->ECHO_Timer_Handle, TIM_IT_CC1);
	HAL_TIM_IC_Start_IT(dev->ECHO_Timer_Handle, dev->ECHO_Timer_Channel);

	/*
	 *
	 * Initialize default values of variables used for measuring
	 *
	 */

	dev->measuringStarted = 0;
	dev->lastDistanceMeasured = 0;

	/*
	 *
	 * Initialize GPIO for sending the trigger signal trigger for specified port and pin
	 *
	 */

	dev->Trigger_GPIO_Port = Trigger_GPIO_Port;
	dev->Trigger_GPIO_Pin = Trigger_GPIO_Pin;

	GPIO_InitTypeDef Trigger_GPIO_InitStruct = {0};
	HAL_GPIO_WritePin(Trigger_GPIO_Port, Trigger_GPIO_Pin, GPIO_PIN_RESET);
	Trigger_GPIO_InitStruct.Pin = Trigger_GPIO_Pin;
	Trigger_GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	Trigger_GPIO_InitStruct.Pull = GPIO_PULLUP;
	Trigger_GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
	HAL_GPIO_Init(Trigger_GPIO_Port, &Trigger_GPIO_InitStruct);




}
