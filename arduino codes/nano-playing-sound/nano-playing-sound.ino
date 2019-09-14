/*
   Writter by Ahmed khairy
   on friday 14/9/2019
   using arduino nano
   playing sound using keyboard
*/
#include <avr/io.h>
#include <util/delay.h>
#include <USART.h>
#include <USART.c>
#include <organ.h>
#include <organ.c>
#include <scale16.h>

#define NOTE_DURATION 0XF000

int main(void)
{
  char key;
  uint16_t currentNoteLength = NOTE_DURATION / 2;
  const uint8_t keys[] = { 'a', 'w', 's', 'e', 'd', 'f', 't', 'g', 'y', 'h', 'j', 'i', 'k', 'o', 'l', 'p', ';', '\''};
  const uint16_t notes[] = { G4, Gx4, A4, Ax4, B4, C5, Cx5, D5, Dx5, E5, F5, Fx5, G5, Gx5, A5, Ax5, B5, C6};
  uint8_t isNote;
  uint8_t i;

  DDRD = _BV(6);  // all pins of portd is output
  initUSART();  // start usart communication
  printString("Serial sound!\r\n");  //print hello world on screen
  while (1)
  {
    key = receiveByte();  //put the received character in y
    transmitByte('N');
    isNote = 0;
    for (i = 0; i < sizeof(keys); i++) //loop for checking the incoming value
    {
      if (key == keys[i])
      {
        /* found match in lookup table */
        playNote(notes[i], currentNoteLength);
        isNote = 1;
        /* record that we've found a note */
        break;
        /* drop out of for() loop */
      }
    }
    if (!isNote)
    {
      if (key == '[')
      {
        /* code for short note
        */
        currentNoteLength = NOTE_DURATION / 2;
      }
      else if (key == ']')
      {
        /* code for long note
        */
        currentNoteLength = NOTE_DURATION;
      }
      else {
        /* unrecognized, just rest
        */
        rest(currentNoteLength);
      }
    }
  }
  return (0);
}
