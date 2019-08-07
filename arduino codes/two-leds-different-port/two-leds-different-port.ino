/*
 * Written by Ahmed khairy for TOT training
 * on 6/8/2019
 * pattern two leds 2
 */
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  DDRD = 0b00100000;  //DDRD = (1<<PB5);
  DDRB = 0b00000001;  //DDRB = (1<<PB0);
  while (1)
  {
    PORTD = 0b00100000;
    _delay_ms(1000);
    PORTB = 0b00000001;
    _delay_ms(1000);
    PORTD = 0b00000000;
    _delay_ms(1000);
    PORTB = 0b00000000;
    _delay_ms(1000);
  }
}
