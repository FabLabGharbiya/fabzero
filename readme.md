
# Welcome to Fab Lab Gharbiya

Hello this is STEM Gharbiya school's Fab Lab :sunglasses:

This is a new file

## Training contents

### Sofwares

- Free cad
- openscad
- kicad
- inkscape
- openscad
- freecad
- kicad
- gimp
- wine
- vcarve

### Notes

- Pull learning better than push learning
- Let them fail to learn
- Give them tools to make their jobs not instructions
- Things will go wrong
- Things will continuously change
- You will lose work
- You will break things
- You will not be able to find a solution immediately

### How to install Ubuntu OS beside Windows 10

- Free up minimum 70 GB
- Shrink that space
- Create a bootable usb with RUFUS software
- Boot from usb drive
- Continue until page that let you choose between automatic installation and custom installation
- Select something else
- New partition
- Make root partition
- /

### Terminal Commands

- ls : used to list all content of the current directory
- clear : used to clear the screen of it's contents
- pwd : used to show the current directory
- cd .. : used to go back one directory
- cd : used to go to the home directory
- cd - : used to go to the last directory
- cd Arduino : used to change current directory to Arduino
- mkdir : used to make directory
- touch : used to make new file
- cat : used to show what is inside the file
- echo : used to show a message on the screen
- echo hello > readme.md : used to send hello to readme.md file
- man : used to show manual
- nano : used to edit text file
- git status : used to know the status of the md file i want to push

#### Notes about termianl

- Commands are sensitve case
- To add option to the command line we add - symbol, like >ls -l
  - if I use this the directory begin with d and file begin with - then permission then size in byte
  - ls -lh >> h : means human readable
- Using arrow keys : used to show old commands
- Using tab key to complete the commands

### github

- First sign up for github and register your information and confirm your email
- Naming the file readme.md ease showing it as a default document when open the respotory
- My respotory can be public or private
- First we create readme.md file, then push it to github, later we can edit it and write a commit of the editing
- Text, images, emoji, tables, etc.... can be added to the file

### Steps of dealing with github

- Sign up github
- Confirm email
- login with the registered email
- Create new respotory (prefet names fabzero for now)
- There are steps are shown on the new respotory page you should follow as you inside your local folder that contains your readme.md file like
  - git init
    - If the first command faced a problem caused by absent of git, you should follow the instructions appear to fix it
  - git add readme.md
  - git commit -m "first commit"
    - The message between the two symbols "" should be related to the editing
  - git remote add origin https://github.com/fablabgharbiya/fab.git
    - fablabgharbiya: depending on your user name and respotory name
  - git push -u origin master
    - used to push the file to the respotory
- If you want to edit the readme.md
    - Edit your file
    - Open your terminal
    - Change your directory to the readme.md file
    - Write the following commands
        - git add .
            - used to add all modified files only
        - git commit -m "modified i have made"
        - git push 

### Visual studio code

- I can use it to edit files
- It uses markdown language, it is like html but easier and easy to understand and read
- emoji can be used but after installing it's feature from the square on the lower left, the website used to get the emojis https://www.webfx.com/tools/emoji-cheat-sheet/
- It is better to leave one line between each line, there is another feature used to help in this method named markdownlint
- 
![screenshot1](picture.png)