su betty changes user to betty
id -un prints the effective username of the current user
 groups- prints all the groups the current user is part of
chown betty hello - - script that changes the owner of the file hello to the user betty
touch hello - - a script that creates an empty file called hello.
chmod u+x hello - -  script that adds execute permission to the owner of the file hello
chmod u+x,g+x,o+r hello --- a  script that adds execute permission to the owner and the group owner, and read permission to other users, to the file hello
