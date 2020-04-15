#ifndef HOLBERTON_
#define HOLBERTON_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <errno.h>

/*execute functions */
void builtins(char *line, char **args, char **environment, int *exit_status);
void execute(char **args, int *exit_status);
int print_environment(char **environment, int *exit_status);
int ctrld(char *line);

/* strings funcs */
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
char *_strconcat(char *dest, char *src);

/*print funcs*/
void _putchar(char c);
void print_str(char *s);
char **split_token(char *line);

void remove_newline(char *line);

#endif
