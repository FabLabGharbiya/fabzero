/*
   written by Ahmed khairy
   on moday 10/9/2019
   using arduino uno
   test shifting with (1<<3) method
*/
#include <avr/io.h>
#include <util/delay.h>
#define dly 50
int main(void)
{
  DDRD = 0xff;
  PORTD = 0x00;
  while (1)
  {
    PORTD = (2 << 3);
    _delay_ms(dly);
    PORTD = (1 << PB3);
    _delay_ms(dly);
  }
  return (0);
}
