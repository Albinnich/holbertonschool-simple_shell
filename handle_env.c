#include "main.h"

/**
 * handle_env - Prints all enviroment variables
 * Return: Nothing.
 */

void handle_env(void)
{
	char **env = environ;

	while (*env != NULL)
	{
		printf("%s\n", *env);
		env++;
	}
}
