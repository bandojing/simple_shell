#include "holberton.h"

/**
 *exit_function -  exits the shell
 *@line: buffer of user input
 *@args: pointer to argument string
 *@ex_st: pointer to exit status
 *Return: returns int
 */
int exit_function(char *line, char **args, int *ex_st)
{

	free(line);
	free(args);
	exit(*ex_st);
}

/**
 *print_environment - handles environment builtin
 *@environment: environment variable
 *
 *Return: 0 on success
 */
int print_environment(char **environment)
{
	int index = 0, length = 0;

	while (environment[index] != NULL)
	{
		length = _strlen(environment[index]);
		write(STDOUT_FILENO, environment[index], length);
		write(STDOUT_FILENO, "\n", 1);
		index++;
	}
	return (0);
}
