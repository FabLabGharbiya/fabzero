/*
    Writter by Ahmed khairy
    on Wednesday 7/8/2019
    Testing all instruction until today
*/
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
ISR(PCINT0_vect)
{
  cli();
  if (!(PINB & (1 << PB3)))
  {
    if (PINB & (1 << PB0))
    {
      PORTB ^= (1 << PB0);
      PORTB ^= (1 << PB1);
    }
    else if (PINB & (1 << PB1))
    {
      PORTB ^= (1 << PB1);
      PORTB ^= (1 << PB2);
    }
    else if (PINB & (1 << PB2))
    {
      PORTB ^= (1 << PB2);
      PORTB ^= (1 << PB0);
    }
  }
  sei();
}
int main(void)
{
  //DDRB |= (1 << PB5);   //make portb pin5 as output
  PCICR |= (1 << PCIE0);
  PCMSK0 |= (1 << PCINT3);
  sei();
  DDRB = 0b00100111;  //define b 0,1,2 and 5 as output and the rest is input
  PORTB |= 0b000001001; //turn on pb0 and set the pull up resistor of pin 3
  while (1)
  {
    /*
      PORTB |= (1 << PB0);  //turn on the led
      _delay_ms(1000);
      PORTB &= ~(1 << PB0);  //turn oFF the led
      PORTB |= (1 << PB1);
      _delay_ms(1000);
      PORTB |= (1 << PB1);  //turn on the led
      _delay_ms(1000);
      PORTB &= ~(1 << PB1);  //turn oFF the led
      PORTB |= (1 << PB2);
      _delay_ms(1000);
      PORTB |= (1 << PB2);  //turn on the led
      _delay_ms(1000);
      PORTB &= ~(1 << PB2);  //turn oFF the led
      PORTB |= (1 << PB0);
      _delay_ms(1000);
    */
    PORTB |= (1 << PB5);
    _delay_ms(1000);
    PORTB &= ~(1 << PB5);
    _delay_ms(1000);

    /*  PORTB ^= (1 << PB1);
        PORTB ^= (1 << PB2);
        _delay_ms(1000);
        PORTB ^= (1 << PB2);
        PORTB ^= (1 << PB0);
        _delay_ms(1000);
    */
  }
}
/*
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
  }*/
