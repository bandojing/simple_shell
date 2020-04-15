#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
  * main - program to change directory
  * @argc: number of arguments
  * @argv: array of input
  * Return: changed directory
  */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Write: cd<name of directory>\n");
		return (EXIT_FAILURE);
	}

	if (chdir(argv[1]) == 0)
	{
		printf("Directory changed to %s\n", argv[1]);
		return (EXIT_SUCCESS);
	}

	else
	{
		perror(argv[1]);
		return (EXIT_FAILURE);
	}
}
