#include "main.h"

extern RTC_HandleTypeDef hrtc;
extern TIM_HandleTypeDef htim;

void SysTick_Handler(void) {
    HAL_IncTick();
    HAL_SYSTICK_IRQHandler();
}

void EXTI15_10_IRQHandler(void){
	HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_13);
}

void EXTI9_5_IRQHandler(void){
	HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_9);
}

void RTC_Alarm_IRQHandler(void){
	HAL_RTC_AlarmIRQHandler(&hrtc);
}

void TIM6_DAC_IRQHandler(void){
	HAL_TIM_IRQHandler(&htim);
}
