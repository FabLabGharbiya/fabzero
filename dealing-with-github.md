# Steps of dealing with github

1. Sign up github
2. Confirm email
3. login with the registered email
4. Create new respotory (prefet names fabzero for now)
5. There are steps are shown on the new respotory page you should follow as you inside your local folder that contains your readme.md file like
    - git init
      - If the first command faced a problem caused by absent of git, you should follow the instructions appear to fix it
   - git add readme.md
   - git commit -m "first commit"
     - The message between the two symbols "" should be related to the editing
   - git remote add origin https://github.com/fablabgharbiya/fab.git
     - fablabgharbiya: depending on your user name and respotory name
   - git push -u origin master
     - used to push the file to the respotory
6. If you want to edit the readme.md
   - Edit your file
   - Open your terminal
   - Change your directory to the readme.md file
   - Write the following commands
     - git add .
        - used to add all modified files only
    - git commit -m "modified i have made"
    - git push 
7. If you want to delete files and recover it again, in case some thing happend and you want to back to earlier point
8. Deleting data is useful to recover when it lose
