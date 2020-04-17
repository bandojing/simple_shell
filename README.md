## Simple_shell
### Description
Shell is program that executes commands read from a terminal or a file.

### Environment
Our shell was created and tested on Ubuntu 14.04 LTS via Vagrant in VirtualBox.

File Contents
This repository contains the following files:

|   **File**   |   **Description**   |
| -------------- | --------------------- |
|main.c | The main function, prints a prompt ($$$) to initialize the shell |
|AUTHORS | Contains info about authors of the project |
|builtins.c | This file contains the exit, env built-in commands |
|ctrld.c| Contains functions for when Ctrl+D and Ctrl+C is used |
|execute.c | Contains functions that  execute commands in the shell |
|path_handler.c | Iterates through PATH variable and concatinates command into it |
|get_builtins.c| Contains functions to find the correct built in function by looking at the first argument |
|print_functions.c | Contains functions used for printing characters |
|string_funtions.c | contains functions used for manipulating stsrings |
|man_1_simple_shell | Man page for the created shell |
|holberton.h   | Header file containing all function prototypes and struct declarations |


### Function Descriptions

| **Function** | **Description** |
| -------------- | ----------------- |
|void execute(char **args| executes user input typed in the shell |
|char **split_token(char *line)| splits a line into tokens and stores it in the args pointer |
|void remove_newline(char *line) | removes the '\n' character so that the shell doesn't duplicate the prompt |
|void buitins(char *line, char **args, char **environment)| returns a function corresponding to each builtin |
|int print_environment(char **environment)|handles the env built in and prints the environment |
|void exit(char *line)| handles exit command |
|int _strlen(char *s)| Returns the length of a string|
|int _strcmp(char *s1, char *s2)| compares two strings and returns 0 if identical|
|char *str_concat(char *s1, char *s2)| contatenates two strings |
|char *_strconcat(char *dest, char *src)| concatenates two strings, takes char src puts it at end of dest |
|char *_strdup(char *str)| returns pointer of string to memory allocated space containing copy of string |
|int ctrld(char *line)| handles for Ctrl+D |
|void *print_str(char *s)| prints a string |
|void _putchar(char *s)| prints a character |
### Usage and Installation
Clone the repository, compile with compilation flags, listed below, then run the executable.
```
$ git clone https://github.com/bandojing/simple_shell.git
```
### Compilation
This code was compiled this way:
` $ gcc -Wall -Werror -Wextra -pedantic *.c -o bootlegshell `

###### Example usage

```
vagrant@vagrant-ubuntu-trusty-64:~/holbertonschool-low_level_programming/shelll$ ./bootlegshell
dtvan@dtvangogh:simple_shell$ ./bootlegshell
$$$ env
SHELL=/usr/local/bin/bash
LSCOLORS=GxFxCxDxBxegedabagaced
ITERM_PROFILE=palenight
COLORTERM=truecolor
XPC_FLAGS=0x0
TERM_PROGRAM_VERSION=3.3.9
LESS_TERMCAP_se=
LESS_TERMCAP_so=
SSH_AUTH_SOCK=/private/tmp/com.apple.launchd.hsfCsAzpfn/Listeners
TERM_SESSION_ID=w0t0p0:BAFA2FDC-C7E4-4835-BFD0-F65EBDC0915B
PWD=/Users/qpv2/simple_shell/simple_shell
LOGNAME=dtvan
LaunchInstanceID=279A796F-9F27-44F5-B26D-8EFE4A226964
COMMAND_MODE=unix2003
ITERM_SESSION_ID=w0t0p0:BAFA2FDC-C7E4-4835-BFD0-F65EBDC0915B
HOME=/Users/qpv2
LANG=en_US.UTF-8
SECURITYSESSIONID=186a6
TMPDIR=/var/folders/_z/ddzpgzkj291g7vk9k_z_b20c0000gp/T/
LC_TERMINAL=iTerm2
CLICOLOR=1
TERM=xterm-256color
LESS_TERMCAP_mb=
LESS_TERMCAP_me=
LESS_TERMCAP_md=
USER=dtvan
COLORFGBG=15;0
LC_TERMINAL_VERSION=3.3.9
LESS_TERMCAP_ue=
SHLVL=2
LESS_TERMCAP_us=
XPC_SERVICE_NAME=0
PS1=\[\033[36m\]\u\[\033[m\]@\[\033[32m\]\h:\[\033[33;1m\]\W\[\033[m\]$
PATH=/usr/local/bin:/usr/bin:/bin:/usr/sbin:/sbin:/action
__CF_USER_TEXT_ENCODING=0x0:0:0
TERM_PROGRAM=iTerm.app
_=./bootlegshell
OLDPWD=/Users/qpv2/simple_shell
 simple shell: cd: env: No such file or directory
$$$  simple shell: cd: env: No such file or directory
$$$ exit
```

```
dtvan@dtvangogh:simple_shell$ ./bootlegshell
$$$ pwd
 simple shell: cd: pwd: No such file or directory
$$$  simple shell: cd: pwd: No such file or directory
$$$
```



### Authors
Bryant Davis, Victor Rivera, DT Van
