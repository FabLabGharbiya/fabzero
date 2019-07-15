# FABMODS

- First there is fabmodules compiled then fab modules html 5 then the newest one is the mods
- When using the laser and vinyl i have to create a printer server on my pc, but using modela and monofa i have to create serial server

Steps to makes local server

1. https://gitlab.cba.mit.edu/pub/mods
2. mods view project
3. so i clone the website contents by pressing on clone then copy the http link and write `git clone link`
4. i have to make sure i'm not in the fabzero folder so in the next push command i don't push these files
5. then search for nodesources github
6. select the distribtion link
7. go to installation instruction
8. install node.js v12.x
9. then go to section add the nodesource package signing key and follow the instruction
10. then install from the ad the desired nodesource repository, but replace 8 with 12 and continue the other two steps
11. sudo npm install http-server -g
12. cd mods
13. cd js
14. node serialserver.js 127.0.0.1 1234
15. if getting error : cannot find serial port
16. npm install serialport
17. next error : cannot find module ws
18. npm install ws
19. to start it node serialserver.js 127.0.0.1 1234


[Go back to readme file](/readme.md)