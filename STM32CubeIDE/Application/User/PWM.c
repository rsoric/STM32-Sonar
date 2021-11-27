/*
 * PWM.c
 *
 *  Created on: 16. stu 2021.
 *      Author: rsoric
 */

#include "PWM.h"
#include "main.h"
#include "stm32f4xx_hal_def.h"
#include "cmsis_os.h"

void PWM_init(
		PWM * 				dev,
		TIM_TypeDef * 		PWM_Timer_Instance,
		uint16_t 			PWM_Timer_Channel,
		GPIO_TypeDef * 		PWM_GPIO_Port,
		uint16_t 			PWM_GPIO_Pin)
{


	/*
	 *
	 * Initialize the timer and GPIO for sending PWM to power the servo
	 *
	 * Note: If needed, the timer prescaler for this timer can and should be changed if you change the value of your APB2 prescaler.
	 * This timer is intended to increment at the frequency of 1 MHz.
	 * The formula for the correct value of the prescaler is: (APB2 freq. in MHz) - 1
	 * However, I do not reccomend changing this at all as this was set by TouchGFX and is required for the display to function properly.
	 *
	 * The period of the PWM base frequency to drive the servo is 20 ms.
	 * Pulse length of 548 us will turn the sensor all the way to the right.
	 * Pulse length of 2000 us will turn the sensor all the way to the left.
	 *
	 */

	dev->PWM_Timer_Instance = PWM_Timer_Instance;
	dev->PWM_Timer_Channel = PWM_Timer_Channel;

	__HAL_RCC_TIM9_CLK_ENABLE();     //TODO, ovo se pali za svaki timer drugačije

	TIM_OC_InitTypeDef PWM_sConfigOC = { 0 };
	dev->PWM_Timer_Handle.Instance = PWM_Timer_Instance;
	dev->PWM_Timer_Handle.Init.Prescaler = 168 - 1;
	dev->PWM_Timer_Handle.Init.CounterMode = TIM_COUNTERMODE_UP;
	dev->PWM_Timer_Handle.Init.Period = 20000;
	dev->PWM_Timer_Handle.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	dev->PWM_Timer_Handle.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
	if (HAL_TIM_PWM_Init(&(dev->PWM_Timer_Handle)) != HAL_OK) {
		Error_Handler();
	}
	PWM_sConfigOC.OCMode = TIM_OCMODE_PWM1;
	PWM_sConfigOC.Pulse = 645;
	PWM_sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
	PWM_sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
	if (HAL_TIM_PWM_ConfigChannel(&(dev->PWM_Timer_Handle), &PWM_sConfigOC, PWM_Timer_Channel)
			!= HAL_OK) {
		Error_Handler();
	}
	__HAL_RCC_GPIOE_CLK_ENABLE(); //TODO, ovo se pali za svaki timer drugačije
	GPIO_InitTypeDef GPIO_InitStruct_PWM = {0};
	GPIO_InitStruct_PWM.Pin = PWM_GPIO_Pin;
	GPIO_InitStruct_PWM.Mode = GPIO_MODE_AF_PP;
	GPIO_InitStruct_PWM.Pull = GPIO_NOPULL;
	GPIO_InitStruct_PWM.Speed = GPIO_SPEED_FREQ_LOW;
	GPIO_InitStruct_PWM.Alternate = GPIO_AF3_TIM9; //TODO, ovo se pali za svaki timer drugačije
	HAL_GPIO_Init(PWM_GPIO_Port, &GPIO_InitStruct_PWM);
	HAL_TIM_PWM_Start(&(dev->PWM_Timer_Handle), PWM_Timer_Channel);
}

void PWM_setPulse(
		PWM * 				dev,
		uint32_t			pulse)
{
	HAL_TIM_PWM_Stop(&(dev->PWM_Timer_Handle), dev->PWM_Timer_Channel); // stop generation of pwm
	TIM_OC_InitTypeDef sConfigOC;
	dev->PWM_Timer_Handle.Init.Period = 20000; // set the period duration
	HAL_TIM_PWM_Init(&(dev->PWM_Timer_Handle)); // reinititialise with new period value
	sConfigOC.OCMode = TIM_OCMODE_PWM1;
	sConfigOC.Pulse = pulse; // set the pulse duration
	sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
	sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
	HAL_TIM_PWM_ConfigChannel(&(dev->PWM_Timer_Handle), &sConfigOC, dev->PWM_Timer_Channel);
	HAL_TIM_PWM_Start(&(dev->PWM_Timer_Handle), dev->PWM_Timer_Channel); // start pwm generation
}
