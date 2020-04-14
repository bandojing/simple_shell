## simple_shell

This is a custom command line interpreter, otherwise known as a Shell. The purpose of this Shell is to execute commands based on what the user inputs on the prompt. Our prompt to be displayed is simply the executable file of our 
Shell, which takes in a number of parameters afterwards.
Once parameters are filled in, a process takes place and the first step of the process is our Shell first checks for aliases of commands in what the user wrote on the prompt.
If an alias for a command is detected in user input, the Shell will execute that command and produce a new prompt upon the user pressing Enter.
However if there are no aliases detected in the user, next the Shell will check if there are any built-in functions in the parameters the user inputted on the prompt.
If what the user wrote isn't a built-in command, next it finds the program that runs the command the user inputted and executes it, producing the output
and then producing a new prompt afterwards.
If the Shell finds any syntax and/of parameter errors, like misuse of a command or misspelling, it will produce an error message and then a new prompt.

#### commands and syntax

We created commands and functions that the user can utilize in our Shell, listed below:
| File					| Description					|
|---------------------------------------|-----------------------------------------------|
|ac.c					|program that prints out the arguments after program is run.|
|cdcommand.c				|Program to change directory.|
|executech.c				|program that uses execve function.|
|lscommand.c				|Program for ls command.|
|pid.c					|program that prints out the process id number using getpid function.|
|print_max_pid				|shell script that prints the max pid number of the system.|

### Examples of Shell outputs
