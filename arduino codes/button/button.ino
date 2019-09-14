/*
   Written by Ahmed khairy for TOT training
   on 6/8/2019
   using arduino uno
   button
*/
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  //DDRD = 0b00000000; //i don't have to write this line because it's initial value is zero
  PORTD = 0b11111111; //connect the internal pull up resistor of all the port
  DDRB = 0b00101000;
  while (1)
  {
    if (PIND == 0b01111111) //read the value of input pin
      PORTB = 0b00100000;
    else
      PORTB = 0b00001000;
  }
}
