#include <stdio.h>
#include <stdint.h>

uint8_t SerialTransmit(char * pData, uint16_t Size);
// Dans cet exemple, on fait du polling, et c'est pas très grave
char SerialReceiveChar(void);
