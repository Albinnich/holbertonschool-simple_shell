#include "main.h"

/**
 * handle_env - Function to check if first element is env
 * @line: input from user
 * Return: status
 */

void handle_env(char *line)
{
	char **env = environ;

	while (*env != NULL)
	{
		printf("%s\n", *env);
		env++;
	}
	free(line);
	exit(EXIT_SUCCESS);
}
