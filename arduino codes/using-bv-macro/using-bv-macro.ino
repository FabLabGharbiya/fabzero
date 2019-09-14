/*
   written by Ahmed khairy
   on moday 10/9/2019
   using arduino uno
   using _BV(x) macro
*/
#include <avr/io.h>
#include <util/delay.h>
#define dly 100
int main(void)
{
  uint8_t x = 1;
  DDRD = 0xff;
  PORTD = 0x00;
  while (1)
  {
    while (x < 7)
    {
      PORTD = ~_BV(x);
      _delay_ms(dly);
      x++;
    }
   PORTD = 0;
    while (x > 0)
    {
      PORTD |= _BV(x);
      _delay_ms(dly);
      x--;
    }
    PORTD = 0;
  }
  return (0);
}
