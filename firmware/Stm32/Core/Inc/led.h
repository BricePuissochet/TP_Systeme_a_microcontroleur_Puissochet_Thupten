/*
 * led.h
 *
 *  Created on: Feb 29, 2024
 *      Author: bricpuis65
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include <stdio.h>
#include <stdint.h>


void LedStart(void);

void LedSetValue(uint8_t val);

void LedPulse(void);


#endif /* INC_LED_H_ */
