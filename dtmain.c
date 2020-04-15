#include "holberton.h"

/**
 * main - a bootleg UNIX shell
 * @argc: the number of arguments passed by the user
 * @argv: the array of strings of the arguments passed
 * @environment: the enviroment
 * Return: 0
 */
int main(int argc, char **argv, char **environment)
{
	char *line = NULL;
	char **args = NULL;
	size_t len = 0;
	ssize_t read = 0;
	(void)argc, (void)argv;
	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, "$$$ ", 4);

		read = getline(&line, &len, stdin);
		if (read == EOF || read == -1)
			return (ctrld(line));
		if (line[0] == '\n')
		{
			free(line);
			continue;
		}

		remove_newline(line);

		args = split_token(line);

		builtins(line, args, environment);

		execute(args);

		fflush(stdin);
	}
	free(line);
	return (0);
}
/**
 * split_token - splits input into tokens to get arg variable
 * @line: the string to split
 * Return: the line will be split into separate arguments
 */

char **split_token(char *line)
{
	char **args;

	char *tokens = NULL;

	int number_of_arguments = 0;

	tokens = strtok(line, " \t");

	while (tokens != NULL)
	{
		tokens = strtok(NULL, " \t");
		number_of_arguments++;
	}

	args = malloc(sizeof(char *) * (number_of_arguments + 1));

	tokens = strtok(line, " \t");
	number_of_arguments = 0;
	while (tokens != NULL)
	{
		args[number_of_arguments] = tokens;
		tokens = strtok(NULL, " \t");
		number_of_arguments++;
	}

	args[number_of_arguments] = NULL; /*set to null to avoid memory leaks?*/
	return (args);
}

/**
 * no_nl - removes the new line with the NULL character
 * @line: the line of user input
 * Return: nothing
 */
void remove_newline(char *line)
{

	int i = 0;

	while (line[i])
	{
		if (line[i] == '\n')
		{
			line[i] = '\0';
			return;
		}

		i++;
	}
}
