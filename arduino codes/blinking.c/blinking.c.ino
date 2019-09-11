/*
 * Written by Ahmed khairy for TOT training
 * on 5/8/2019
 * introduction to c language (library, DDRx, PORTx, _delay_ms(1000)
 */
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  DDRB = 0b00100000;  //make portb input(0) or output (1)
  while (1)
  {
    PORTB = 0b00100000; //output 5 volt (1) or zero volt (0)
    _delay_ms(1000);  //delay in milli second
    PORTB = 0b00000000;
    _delay_ms(1000);
  }
}
