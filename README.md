Simple Shell
A custom made, command line interpreter. The purpose of this Shell is to issue combinations of commands and execute them on the same command line. Upon execution, it will create a newline after successful or failed execution of a program/command.
When using Shell, the command line is defined by the path which the user is on, followed by a '$' dollar sign. It should take in any number of characters and commands. However there are checks in place where what if a command was written incorrectly? Or the user inputs characters and integers withough typing out a command? As an error is encountered on the Shell, it will display an error message and enter a newline after displaying the message.
Supported text editors are Vi, Vim, Emacs and Nano.

Supported commands are:
- ls
- cd
- echo
- chmod
- chown
- sort
- grep
- cut
- tr

And more to be added.
If there is nothing on the command line and the user presses enter, the Shell will produce a newline.
If the user inputs characters and numbers without the echo command, the Shell will produce an error message and then a newline.
If the user inputs the command ls, it should list all files within the current directory on a single line with spaces in between each file.
If the user inputs another other command without the proper arguments and flags, an error message will display and produce a newline after.
