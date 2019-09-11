/*
   written by Ahmed khairy
   on moday 11/9/2019
   set, clear and toggle bits
*/
#include <avr/io.h>
#include <util/delay.h>
#define dly 100
int main(void)
{
  DDRB = 0x0f;
  while (1)
  {
    /*
       PORTB = (1<<0); //set bit
       PORTB = (1<<1); //set bit
       PORTB = (1<<2); //set bit
       PORTB = (1<<3); //set bit
    */
    //PORTB = (1 << 0) | (1 << 1) | (1 << 2) | (1 << 3); //set bit using or operator
    //PORTB = PORTB & ~(1 << 2); //clear bit
    for (uint8_t x = 0; x <= 3; x++)
    {
      PORTB ^= (1 << x);
      _delay_ms(200);
      PORTB |= (1 << x);
      _delay_ms(200);
      PORTB = (1 << x);
      _delay_ms(200);
      
    }
  }
  return (0);
}
