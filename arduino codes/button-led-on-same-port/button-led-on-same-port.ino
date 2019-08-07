/*
   Written by Ahmed khairy for TOT training
   on 6/8/2019
   button and led on the same port
*/
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  DDRD = (1 << PB7);
  PORTD = 0b01111111;
  _delay_ms(1000);
  while (1)
  {
    if (PIND & 0b10000000)
      PORTD = 0b10000000;
    else
      PORTD = 0b00000000;
  }
}
