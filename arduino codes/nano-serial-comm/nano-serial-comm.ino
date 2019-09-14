/*
   Writter by Ahmed khairy
   on friday 13/9/2019
   using arduino nano
   Serial communication
*/
#include <avr/io.h>
#include <util/delay.h>
#include <pinDefines.h>
#include <USART.h>
#include <USART.c>

int main(void)
{
  char serialCharacter;
  DDRD = 0xff;
  initUSART();
  printString("Hello World!\r\n");
  while (1)
  {
    serialCharacter = receiveByte();
    transmitByte(serialCharacter);
    PORTD = serialCharacter;
  }
}
