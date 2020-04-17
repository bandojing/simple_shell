
#include "holberton.h"

/**
 * execute - function that executes in the main shell
 * @args: the arguments after strtoked
 * Return: void
 */
void execute(char **args)
{
	pid_t my_pid;

	my_pid = fork();

	if (access(args[0], X_OK) == 0)
	{
		if (my_pid == 0) /* 0 = child */
			execve(args[0], args, NULL);
		if (my_pid == -1)
		{
			write(STDOUT_FILENO, "Fork error", 13);
		}

		else
			wait(NULL);
	}
	else
	{
		print_str(" unknown command: ");

		perror(args[0]);
	}
	free(args);
}
