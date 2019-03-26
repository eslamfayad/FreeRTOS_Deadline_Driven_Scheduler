/*
 * includes.h
 *
 *  Created on: Mar 19, 2019
 *      Author: amcote
 */

#ifndef INCLUDES_H_
#define INCLUDES_H_

/* Standard includes. */
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stm32f4_discovery.h"
#include <string.h>

/* Kernel includes. */
#include "stm32f4xx.h"
#include "../FreeRTOS_Source/include/FreeRTOS.h"
#include "../FreeRTOS_Source/include/queue.h"
#include "../FreeRTOS_Source/include/semphr.h"
#include "../FreeRTOS_Source/include/task.h"
#include "../FreeRTOS_Source/include/timers.h"

// Hardware defines
#define amber_led	LED3
#define green_led	LED4
#define red_led		LED5
#define blue_led	LED6


#endif /* INCLUDES_H_ */
