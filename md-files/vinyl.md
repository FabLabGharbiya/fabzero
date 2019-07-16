# vinyl cutter

Notes

- Don't use roll from the center
- If any one made mistage i take a photo of the mistake with paper write on it the mistake to make sure no one do that again
- When put the blade in it's holder it should be hidden for eye but can feel it by hand only
- The holder of the blade shouldn't be very tighten, just closed well
- There is optical sensor in the moving head
- It's better to create an outside rectangle when creating any design to be easy to stick
- Fabmodulas is better than cut studio because it's faster
- The prober way to store the roll is by using solotip or mask tap or something like that to keep the roll closed and keep it horizental
- There is a small space in the bottom back of the vinyl to attack the holder of the roll

Maintainence

- Clean the machine periodically from the dust
- The rubber stripe where the blade goes down should not be in good condition, and if it is not in good condition it should be replaced
- Use iso probeller to clean the sensors or any other alcohol but without water

Testing the blade

1. Check the blade using eye loop or digital microscope and check if the blade not broken
    - Cheese software can be used after connecting the digital microscope and select it as the active camera then check the blade condition
2. Put the roll in the machine
3. Insert the roll in the space specified for the roll
4. Put the two wheels under the white spots, and on the roll
5. Power on the machine and select roll
6. Long press on test
7. If the blade is good, the circle should be removed easily and the square stayes as it is

Printing from UBUNTU

- When i connect the vinyl file will appear in /dev/usb/
- `cat filename.camm` : this means show send file content to the screen (O/P)
- `cat filename.camm > /dev/usb/ip1` : used to send the file to the connected usb device
- I can put the command directly at fabmoulas
- If problem occuer and i cannot print
- `ls -l /dev/usb/lp0` : to show the usb's group and user permission needed
- `Groups ahmed` : to show my groups, `root lp .....`  if i'm not in the printer group, i cannot print, so i have to enter it's group
- Then i have to log out and log in again

printing multilayer

- download the logo or the req. picture
- if the image is raster i should convert it to vector
- it's better that the image is vector from the begining
- how to search for specific file : fablab logo filetype;svg
- using inkscape software
- `file > document properties`
- we can use picture by changing it's colors to 3 colors and increase the contrast
- we sholud print each color on it's roll.
- by using tab mask we stick it to the first color and then put the tab mask on the surface i want to attach the sticker to it
- remove the tab mask from it and stick it to the next layer of roll (different color)
- align the second color to the first one by the marks we made in them and stick it from it's terminals then begin to remove the sticker from it's original paper and make sure that it is stick to the tab mask then cut the extracted paper then stick that half to the surface then do that to the other side
- do the previous step for all the colors
- after putting all layers now i can remove marks i put to align

[Go back to readme file](/readme.md)