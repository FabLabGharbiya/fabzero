/*
   written by Ahmed khairy
   on moday 9/9/2019
   using arduino uno
   functions and pattern
*/
#include <avr/io.h>
#include <util/delay.h>

void pattern(uint8_t oneByte)
{
  PORTD |= oneByte;
  _delay_ms(100);
}

int main(void)
{
  DDRD = 0xff;
  PORTD = 0x00;
  while (1)
  {
    pattern(0b10000000);
    pattern(0b01000000);
    pattern(0b00100000);
    pattern(0b00010000);
    pattern(0b00001000);
    pattern(0b00000100);
    pattern(0b00000010);
    pattern(0b00000001);
    PORTD = 0;
    _delay_ms(10);
  }
  return (0);
}
