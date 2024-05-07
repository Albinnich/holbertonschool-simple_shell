#include "main.h"
#include <string.h>

/**
 * main - Main code for shell script
 *
 * Return: integer
 */

int main(void)
{
	char *command;
	int status = 0;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			printf("$ ");

		command = _getline();

	if (command == NULL)
		break;
	if (strcmp(command, "exit") == 0)
	{
		free(command);
		exit(0);
	}
	status = execute_command(command);
	if (status == 2)
	{
		exit(2);
	}
	}
	return (status);
}
