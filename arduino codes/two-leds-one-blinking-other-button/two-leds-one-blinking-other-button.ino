/*
   Written by Ahmed khairy for TOT training
   on 6/8/2019
   one blink other is controlled by button
   external blinking led on pb0
   internal controlled led on onboard led 13
   modified on 10/9/2019 by using #define instead of using pb0, pb1 and pb5 every time
*/
#include <avr/io.h>
#include <util/delay.h>
#define button PB1
#define led1 PB0
#define led2 PB5

int main(void)
{
  DDRB = 0b00100001;  
  PORTB = 0b11111110;
  while (1)
  {
    PORTB |= (1 << led1);  //i can use xor for toggling PORTB ^=(1<<PB0)
    _delay_ms(1000);
    PORTB &= ~(1 << led1); //~ used to inverse bit (bitwise)
    _delay_ms(1000);
    if (!(PINB & (1 << button))) //! used to test false condition
      PORTB |= (1 << led2) ;
    else
      PORTB &= ~(1 << led2);
  }
}
