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
