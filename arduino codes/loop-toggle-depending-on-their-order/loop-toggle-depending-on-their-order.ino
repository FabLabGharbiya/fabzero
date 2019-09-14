/*
   written by Ahmed khairy
   on moday 11/9/2019
   using arduino uno
   set, clear and toggle bits
*/
#include <avr/io.h>
#include <util/delay.h>
#define dly 100
int main(void)
{
  DDRB = 0x0f;
  uint8_t i = 0;
  while (1)
  {
    /*
       PORTB = (1<<0); //set bit
       PORTB = (1<<1); //set bit
       PORTB = (1<<2); //set bit
       PORTB = (1<<3); //set bit
    */
    for (uint8_t x=0; x<=i;x++)
    {
    PORTB = (1 << 0) | (1 << 1) | (1 << 2) | (1 << 3); //set bit using or operator
    _delay_ms(1000);
      PORTB = PORTB & ~(1 << i);
      _delay_ms(1000);
    }
    i++;
    if (i == 4)
      i = 0;
  }
  return (0);
}
