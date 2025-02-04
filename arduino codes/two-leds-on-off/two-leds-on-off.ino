/*
   Written by Ahmed khairy for TOT training
   on 6/8/2019
   using arduino uno
   pattern two leds
*/
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  DDRD = 0b11000000;
  while (1)
  {
    PORTD = 0b10000000;
    _delay_ms(1000);
    PORTD |= 0b01000000;  //using or operator to set specific bit(s)
    _delay_ms(1000);
    PORTD &= 0b01111111;  //using and operator to clear specific bit(s)
    _delay_ms(1000);
    PORTD &= 0b00000000;
    _delay_ms(1000);
  }
}
