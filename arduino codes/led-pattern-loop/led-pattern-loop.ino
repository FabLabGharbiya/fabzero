/*
   written by Ahmed khairy
   on moday 10/9/2019
   using arduino uno
   loop and pattern
*/
#include <avr/io.h>
#include <util/delay.h>
#define dly 50
int main(void)
{
  uint8_t x = 1;
  DDRD = 0xff;
  PORTD = 0x00;
  while (1)
  {
    while (x < 7)
    {
      PORTD = (1 << x);
      _delay_ms(dly);
      x++;
    }
    while (x > 0)
    {
      PORTD = (1 << x);
      _delay_ms(dly);
      x--;
    }
  }
  return (0);
}
