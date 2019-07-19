# FABMODS

- First there is fabmodules compiled then fab modules html 5 then the newest one is the mods
- When using the laser and vinyl i have to create a printer server on my pc, but using modela and monofa i have to create serial server

Steps to makes local server

1. http://mods.cba.mit.edu/
2. options > view project
3. install node.js : `npm install npm -g`
4. check the version of node : `node -v`
5. check the version of nvm : `npm -v`
6. install http-server : `npm install http-server -g`
7. clone mods repository `git clone https://gitlab.cba.mit.edu/pub/mods.git`
8. i have to make sure i'm not in the fabzero folder so in the next push command i don't push these files
9. head to mods folder : `cd mods`
10. run server : `http-server`
11. Open a browser tab and go to `127.0.0.1:8080` which is the same as http://localhost:8080 to view the server that you just started.
12. head to js folder : `cd js`
13. run : `node serialserver.js ::ffff:127.0.0.1 1234`

some problems might occeur so the next steps to solve this problem

14. search for nodesources github
15. select the distribtion link
16. go to installation instruction
17. install node.js v12.x : `curl -sL https://deb.nodesource.com/setup_12.x | sudo -E bash -` and `sudo apt-get install -y nodejs`
18. then go to section add the nodesource package signing key and follow the instruction : `curl -sSL https://deb.nodesource.com/gpgkey/nodesource.gpg.key | sudo apt-key add -`
19. then install from the add the desired nodesource repository, but replace 8 with 12 and continue the other two steps : `DISTRO="$(lsb_release -s -c)"` and `echo "deb https://deb.nodesource.com/$VERSION $DISTRO main" | sudo tee /etc/apt/sources.list.d/nodesource.list` and `echo "deb-src https://deb.nodesource.com/$VERSION $DISTRO main" | sudo tee -a /etc/apt/sources.list.d/nodesource.list`
20. then try to test again the port and server
21. npm install serialport
22. next error : cannot find module ws
23. npm install ws
24. google chrome is best for running mods

alternative solution

The sibusaman repository called mods contains the solution steps also

https://github.com/sibusaman/mods

alternative solution

- clone mods
- head to mods directory
- install npm using : `npm install http-server`
- warning it is okay not error
- head to js directory
- install ws : `npm install ws`
- install serialserver : `npm install serialserver`
- /dev/tty* is a serial device
- /dev/usb/lp* is a printer , device server
- start the server : from mods directory we write `hs`
- how to update the sibu mods : `git pull` there is a .get file contains the repo link, to know the link we use `git remote -v`

How to work on it
- http://mods.cba.mit.edu/
- https://sibusaman.github.io/mods/
- we can add modules

[Go back to readme file](/readme.md)