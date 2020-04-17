#include "holberton.h"
/**
 *ctrld - write for ctrld input
 *@line: the user input to free
 *
 *Return: 0 on success
 */
int ctrld(char *line)
{
	free(line);
	if (isatty(STDIN_FILENO) == 1)
		write(STDOUT_FILENO, "\n", 1);
	return (0);
}

void ctrlc(int signal)
{
	(void)signal;

	write(STDOUT_FILENO, "\n$$$ ", 4);
}
