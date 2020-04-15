#include "holberton.h"

/**
 *exit -  exits the shell
 *@array: the array of strings to execute
 *@line: buffer of user input
 *@number_of_commands: the number of commands entered by the user
 *
 */
int exit_function(char *line, char **args, int *ex_st)
{

	free(line);
	free(args);
	exit(*ex_st);
}

/**
 *environment_op - handles environment builtin
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
