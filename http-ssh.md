# Convert from  http to ssh

1. ssh-keygen -t rsa -b 4096 -C "your_email@example.com" : This creates a new ssh key, using the provided email as a label.
2. Enter a file in which to save the key (/home/you/.ssh/id_rsa): [Press enter]
3. Enter passphrase (empty for no passphrase): [Type a passphrase]
4. Enter same passphrase again: [Type passphrase again]
5. eval "$(ssh-agent -s)" : Start the ssh-agent in the background, Agent pid 59566
6. ssh-add ~/.ssh/id_rsa : Add your SSH private key to the ssh-agent
7. Then add ssh to my github
8. sudo apt-get install xclip : to copy the ssh key to my github
9. xclip -sel clip < ~/.ssh/id_rsa.pub
10. then head to github website and choose setting from the ubber left
11. ssh and gpg keys
12. new ssh key
13. paste the key
14. add ssh key
15. confirm password
16. get the ssh from get clone button
16. then head to termianl and check the remote site by using git remote -v
17. begin to replace http by ssh we get from the get clone button using command : git remote set-url origin "paste the link here"
18. done >>> weeeeeeeeeeeeeee

[Go back to readme file](readme.md)