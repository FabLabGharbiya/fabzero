/*
 * Written by Ahmed khairy for TOT training
 * on 6/8/2019
 * pattern two leds 4
 */
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  DDRB = 0b00100001;
  while (1)
  {
    PORTB = 0b00100001;
    _delay_ms(1000);
    PORTB &= 0b11111110;
    _delay_ms(1000);
    //PORTB &= 0b00000000;
    //_delay_ms(1000);
  }
}
