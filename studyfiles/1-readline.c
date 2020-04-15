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
	filep = open("/etc/motd", O_RDONLY, S_IRUSR);
	if (filep == -1)
		return (-1);

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
	return (0);
}
/*used https://linux.die.net/man/3/open as a template*/
