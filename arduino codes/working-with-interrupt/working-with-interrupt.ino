/*
   Written by Ahmed khairy for TOT training
   on 7/8/2019
   using arduino uno
   first we made led blinking
   second we make interrupt
   third put the routine in it
*/
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

ISR(PCINT0_vect)
{
  cli();
  if (!(PINB & (1 << PB0))) //check the status
      PORTB ^= (1 << PB4);
}
int main(void)
{
  DDRB |= (1 << PB5) | (1 << PB4); //ON BOARD LED IS OUTPUT
  PORTB |= (1 << PB0);
  PCICR |= (1 << PCIE0);
  PCMSK0 |= (1 << PCINT0);
  SREG |= (1 << 7); //sei(); can be used also
  while (1)
  {
    PORTB ^= (1 << PB5);
    _delay_ms(1000);
  }
}
