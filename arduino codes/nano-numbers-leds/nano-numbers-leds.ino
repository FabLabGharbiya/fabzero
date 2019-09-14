/*
   Writter by Ahmed khairy
   on friday 13/9/2019
   using arduino nano
   Serial communication
*/
#include <avr/io.h>
#include <util/delay.h>
#include <USART.h>
#include <USART.c>

int main(void)
{
  char serialCharacter;
  uint8_t x, y;
  DDRD = 0xff;  // all pins of portd is output
  initUSART();  // start usart communication
  printString("Hello World!\r\n");  //print hello world on screen
  while (1)
  {
    y = receiveByte();  //put the received character in y
    for (x = 0; x < 7; x++) //loop for checking the incoming value
    {
      if (y == (x + '0')) //summing any data with '0' resulting in the same data but in character value
      {
        PORTD = _BV(x + 1); //because the portd begin with D2
        PORTB = 0;
      }
    }
    for (x = 7; x < 9; x++)
    {
      if (y == (x + '0'))
      {
        PORTB = _BV(x - 7);
        PORTD = 0;
      }
    }
    transmitByte(y);  //to show it on screen
  }
}
