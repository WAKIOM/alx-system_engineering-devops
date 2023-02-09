su betty changes user to betty
id -un prints the effective username of the current user
 groups- prints all the groups the current user is part of
chown betty hello - - script that changes the owner of the file hello to the user betty
touch hello - - a script that creates an empty file called hello.
chmod u+x hello - -  script that adds execute permission to the owner of the file hello
chmod u+x,g+x,o+r hello --- a  script that adds execute permission to the owner and the group owner, and read permission to other users, to the file hello
chmod ugo+x hello - -  a script that adds execution permission to the owner, the group owner and the other users, to the file hello
chmod 007 hello -- script that gives user and group users no permission at all but gives other users permissions to read write and execute
chmod 753 hello --- a script that gives the user all permissions, groups to read and execute and other users to write and execute
chmod --reference=olleh hello --  a script that sets the mode of the file hello the same as olleh’s mode.
chmod -R ugo+X . --script that adds execute permission to all subdirectories of the current directory for the owner, the group owner and all other users.
