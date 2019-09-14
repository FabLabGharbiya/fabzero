/*
   written by Ahmed khairy
   on moday 11/9/2019
   using arduino uno
   two ports led pattern
*/
#include <avr/io.h>
#include <util/delay.h>
#define dly 100
int main(void)
{
  uint8_t x = 0;
  DDRD = 0x0f;
  DDRB = 0x0f;
  PORTD = 0x00;
  PORTB = 0x00;
  PORTB = _BV(0);
  _delay_ms(dly);
  while (1)
  {
    while (x < 5)
    {
      PORTD = _BV(x);
      _delay_ms(dly);
      x++;
    }
    PORTD = 0;
    PORTB = 0;
    do
    {
      x--;
      PORTB = _BV(x);
      _delay_ms(dly);
      
    }
    while (x > 0);

    PORTD = 0;
    PORTB = 0;
  }
  return (0);
}
