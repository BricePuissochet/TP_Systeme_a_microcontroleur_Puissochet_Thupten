#include <stdio.h>
#include <stdint.h>
#include "tim.h"
#include "TimeBase.h"


void TimeBaseStartIT(void){

		LL_TIM_EnableIT_UPDATE(TIM21);
		LL_TIM_EnableCounter(TIM21);
}
