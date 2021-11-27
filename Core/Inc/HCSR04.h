/*
 * HCSR04.h
 *
 *  Created on: 15. stu 2021.
 *      Author: rsoric
 *
 *      This is the header file of the driver written for the HCSR04 ultrasonic distance sensor and the STM32F429I-DISC1 devboard.
 *      !!! NOTE !!!
 *      You need to wire a 10k ohm resistor between the TRIG pin and a pin on the receiver in order for this to work properly.
 *      See: https://www.therandomlab.com/2015/05/repair-and-solve-faulty-hc-sr04.html
 *      PDF archive of this site is also in the source code in the documentation folder as "HCSR04-Trig-Pin-Explanation.pdf
 *
 *
 */

#ifndef APPLICATION_USER_HCSR04_H_
#define APPLICATION_USER_HCSR04_H_

#include "main.h"
#include "stm32f4xx_hal_tim.h"
#include "cmsis_os2.h"

/*
 * HCSR04 Struct
 */

typedef struct{
	GPIO_TypeDef * 		Trigger_GPIO_Port;
	uint16_t 			Trigger_GPIO_Pin;

	TIM_HandleTypeDef*	ECHO_Timer_Handle;
	uint16_t 			ECHO_Timer_Channel;

	uint32_t			lastDistanceMeasured;
	uint8_t				measuringStarted;

}HCSR04;


/*
 * Function for sending a trigger impulse to the sensor to begin measuring
 */
void HCSR04_SendTrigger(HCSR04* dev);

/*
 * Parameters:
 * dev: Pointer to device variable type HCSR04
 * Trigger_GPIO_Port: Specified port of the pin which is going to be used to send the TRIG signal (eg. GPIOE, GPIOC...)
 * Trigger_GPIO_Pin: Specified pin number of the pin intended to send the TRIG signal (eg. GPIO_PIN_2, GPIO_PIN_5...)
 * PWM_TimerHandle: Handle of the timer used to generate PWM to drive the servo (check datasheet for a list of timers that support PWM generation)
 * PWM_Timer_Channel: Specified channel of the timer to be used for PWM generation
 * PWM_GPIO_Port: GPIO port which outputs PWM to drive the servo (has to match the pin assigned to that channel of timer, check the datasheet)
 * PWM_GPIO_Pin: GPIO pin which outputs PWM to drive the servo
 *
 */
void HCSR04_init(
		HCSR04 * 			dev,
		GPIO_TypeDef * 		Trigger_GPIO_Port,
		uint16_t 			Trigger_GPIO_Pin,
		TIM_HandleTypeDef*	ECHO_Timer_Handle,
		uint16_t 			ECHO_Timer_Channel
		);

#endif /* APPLICATION_USER_HCSR04_H_ */
