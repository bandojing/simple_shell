#include "holberton.h"
/**
 * builtins - returns the correct built in function
 * @line: the buffer
 * @args: the arguments passed
 * @environment: the environment
 * @exit_status: the exit status
 * Return: void
 */
void builtins(char *line, char **args, char **environment, int *exit_status)
{

	if (_strcmp(args[0], "env") == 0)
		print_environment(environment, exit_status);

	if (_strcmp(args[0], "exit") == 0)
	{
		free(line);
		free(args);
		exit(*exit_status);
	}
}
