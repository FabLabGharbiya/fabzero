/*
   Written by Ahmed khairy for TOT training
   on 6/8/2019
   using arduino uno
   toggle using xor
*/
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  DDRB = 0b00100001;
  PORTB = 0b00100001;
  while (1)
  {
    PORTB = PORTB ^ 0b00000001;   //using xor operator to toggle a specific pin
    _delay_ms(1000);
    //PORTB &= 0b00000000;
    //_delay_ms(1000);
  }
}
