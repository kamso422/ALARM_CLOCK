#ifndef MAIN_H
#define MAIN_H

#include "stm32f4xx_hal.h"

void SystemClockConfig_HSI(void);
void SystemClockConfig_HSE(void);
void SystemClockConfig_PLL(uint8_t);
void SystemClockConfig_LSE(void);
void ErrorHandler(void);

#define SYSCLK_45_MHZ       45
#define SYSCLK_50_MHZ       50
#define SYSCLK_75_MHZ       75
#define SYSCLK_80_MHZ       80
#define SYSCLK_120_MHZ      120
#define SYSCLK_150_MHZ      150
#define SYSCLK_180_MHZ      180
#define SLEEP_CMD            (1U << 0)
#define DISPLAY_TIME_CMD     (1U << 1)
#define ALARM_OFF			 (1U << 2)
#define ALARM_ON			 (1U << 3)
#define LED_OFF				 (1U << 4)
#endif
