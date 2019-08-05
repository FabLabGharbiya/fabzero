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