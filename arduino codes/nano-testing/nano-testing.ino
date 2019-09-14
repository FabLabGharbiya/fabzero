/*
   Writter by Ahmed khairy
   on friday 13/9/2019
   using arduino nano
   blinking test
*/
#include <avr/io.h>
#include <util/delay.h>
#define dly 50
int main(void)
{
  DDRB = 0x0f;
  uint8_t i = 0;
  while (1)
  {
    PORTB = 0;
    _delay_ms(dly);
        do
    {
      PORTB |= (1 << i);
      _delay_ms(dly);
      i++;
    } while (i < 4);
    do
    {
      PORTB &= ~(1 << i);
      _delay_ms(dly);
      i--;
    } while (i > 0);
  }
  return (0);
}
