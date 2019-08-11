/*
   Written by Ahmed khairy for TOT training
   on 6/8/2019
   one blink other is controlled by button
   external blinking led on pb0
   internal controlled led on onboard led 13
   In this code i will use xor to toggle instead of on and off
*/
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  DDRB = 0b00100001;
  PORTB = 0b11111110;
  while (1)
  {
    PORTB ^= (1 << PB0);
    _delay_ms(1000);
    if (!(PINB & (1 << PB1))) //! used to test false condition
      PORTB |= (1 << PB5) ;
    else
      PORTB &= ~(1 << PB5);
  }
}
