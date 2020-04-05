#include <stdio.h>

int main(int ac, char **av)
{

	
	int count_av = 0;

	for (count_av = 0; count_av < ac; count_av++)
	{
		printf("%s\n", av[count_av]);
	}
	return (0);
}
