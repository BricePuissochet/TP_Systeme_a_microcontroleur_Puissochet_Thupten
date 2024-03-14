#include <stdio.h>
#include <stdint.h>
#include "Serial.h"
#include "usart.h"

uint8_t SerialTransmit(char * pData, uint16_t Size){

	for(uint16_t i = 0;i<Size;i++){
		 while (!LL_USART_IsActiveFlag_TXE(USART2)) {}
		LL_USART_TransmitData8(USART2, *pData++);
	}

	 while (!LL_USART_IsActiveFlag_TC(USART2)) {}
	  return 0;
}
// Dans cet exemple, on fait du polling, et c'est pas très grave
char SerialReceiveChar(void){
    while (!LL_USART_IsActiveFlag_RXNE(USART2)) {}
    return (char)LL_USART_ReceiveData8(USART2);
}
