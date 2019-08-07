# TOT week

## Day 1 - 5/8/2019

### Advanced circuit design
- `calibrating oscilliscope` : by connecting the hock of the channel to the test signal metal and use the screw driver to change the screw position which located in the the cable until the signal appears good
- <b>Programming</b>
  - `digitalwrite` : when executed, it executes instructions under the hood (in the background), if i execute the same instruction with assemply it will be more faster, because it takes less cycles
  - when dealing with microcontroller we should search for `data sheet`
  - there are alot of information in data sheet, you have to pick the data you want and know how to deal with it
  - Setting up AVR-GCC Toolchain on Linux : to compile the code
  - using the same code `blink` with c and arduino and assemply, you will notice that the size is different that's because the arduino execute instructions in the back ground take more cycles
  - to control a specific pin we should know which pin it is in the microcontroller
  - `DDRB` used to define as input or output
      - `DDRB = 0b00100000;` 0 : input, 1 : output
  - `PORTB` used to define the output of the port
    - `PORTB = PORTB | 0B 00010000` : use OR operator to change one bit whick has `one` bit and leave the rest which have the `zero` bit as they are
  - `PORTB = PORTB & 0b00000000` : Multiply the value of portb register to this value `00000000` then it will become all zeros, so it will go off
  - `_delay_ms(1000);` : to make a delay in milli second, it can be in micro too
  - i have to include the library at the begining of the code
  ```
  #include <avr/io.h>
  #include <util/delay.h>

  int main(void)
  {
    DDRB = 0b00100000;
    while (1)
    {
      PORTB = 0b00100000;
      _delay_ms(1000);
      PORTB = 0b00000000;
      _delay_ms(1000);
    }
  }
  ```
  - it is better to write documentation in any code so i can get back to it and know basic informations helping me using it again like `date , my name , name of program`
  ```
  written by ahmed khairy for fabzero training
  on 5 / 8 / 2019
  introduction to c language (library, DDRX, PORTX, _delay_ms(1000))
  ```
- Arduino connecting
  - go to `dev` directory to show if there is a device has been connected to the pc   
  ![dev](/images/dev.png)
  - `dmesg -w` : to monitor the devices which has been connected and disconnected   
  ![dmesg](/images/dmesg.png)   
  ![dmesg2](/images/dmesg2.png)   
  ![dmesg3](/images/dmesg3.png)
  - use `ls -l name-of-the-newfile-appeared` : to know the group of the connected device   
  ![ls](/images/ls.png)   
  ![ls2](/images/ls2.png)   
  - use `groups name-of-your-user` to show your groups   
  ![groups](/images/groups.png)

## Day 2 - 6/8/2019

- arduino programming
  - search for `arduino pinout` to know the pin number   
  ![pinout](/images/arduino-pinout.png)
  - code 1 :   
  ![code1](/images/code1.png)
  - code 2 :   
  ![code2](/images/code2.png)
  - code 3 :
  ![code3](/images/code3.png)
  - code 4 :
  ![code4](/images/code4.png)
  - code 5 :
  ![code5](/images/code5.png)
  - every pin is connected internally to pull up resistor, so it's better to connect the switch to ground instead of connected it to vcc by typing `portx=0b11111111;`   
   ![code6](/images/code6.png)
   - if i use the same port for input and output, when i want to read the input pin and don't know the value of the output pin i have to force it to 0 by using `if(PINB & 0b00000010)`
   - `DDRB = 0b00100001;` =  `DDRB = (1<<PB5) | (1<<PB0)`
   - `PORTB = 0b00000001;` =  `PORTB = (1<<PB0)`
   - set bit : `REG | = (1<<PIN)`
   - clear bit : `REG & = ~(1<<PIN)`
   - test bit : `REG & (1<<pin)`
   - example : 
   ```
   if(!(PINB & (1<<PB1)))
   PORTB | = (1<<PB0)
   else
   PORTB &=~(1<<PB0)
   ```
   - ! : logical operator to check to value
   - ~ : bitwise operator
- electronics circuit
  - eagle installing
  - download library from https://gitlab.cba.mit.edu/pub/libraries/blob/master/eagle/fab.lbr
  - put components
  - get missing library from `snapeda`
  - we should connect the pins according to the datasheet
  - on eagle the pins on the right may be input or output, and i can leave them not connected, but the pins on the left is important to connect them
  - esp01
    - connect rst to vcc to use as device or preferial to gnd
    - ch_pd : to enable or disable the module, we can connect it to output pin of microcontroller
    - i have to connect rx of wifi to tx of microcontroller through voltage divider
    - use rtd whatson bridge as an input device
    - mil = 1000 inch
    - drc clearnce make it 0.4, size make it 0.4
    - min hole depending on dimension of 1/32

## Day 2 - 7/8/2019

- using delay in code causing the microcontroller to stop until the delay finish
