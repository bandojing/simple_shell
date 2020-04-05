#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(void)
{
	/*declare variables*/
	int filep;
	char *theline = NULL;
	size_t leng = 0;
	ssize_t read;

	/*open file check if null*/
	filep = open("/etc/motd", O_RDONLY );
	if (*filep == NULL)
		exit (EXIT_FAILURE);

	/*while loop reads if there is no failure*/
	while ((read = getline (&theline, &leng, filep)) != -1)
	{
		/*print $ read input*/
		printf("$ %zu", read);
		/*print string*/
		printf("%s", theline);
	}
	/*free line read*/
	free(theline);
	exit(EXIT_SUCCESS);
}
/*used https://linux.die.net/man/3/open as a template*/
