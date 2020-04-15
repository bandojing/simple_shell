
#include "holberton.h"

/**
 * _execute - function that executes in the main shell
 * @args: the arguments after strtoked
 * @exit_status: the exit status
 * @number_of_commands: a counter to keep track of all commands that are run
 * Return: void
 */
void execute(char **args, int *exit_status)
{
	pid_t my_pid;
	my_pid = fork();
	*exit_status = 0;
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
		print_str(" simple shell: cd: ");

		perror(args[0]);
		*exit_status = 127;
	}
	free(args);
}
