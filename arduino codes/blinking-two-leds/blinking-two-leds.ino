/*
   Written by Ahmed khairy for TOT training
   on 6/8/2019
   using arduino uno
   blinking two leds
*/
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  DDRD = 0b11000000;
  while (1)
  {
    PORTD = 0b11000000;
    _delay_ms(1000);
    PORTD = 0b00000000;
    _delay_ms(1000);
  }
}
