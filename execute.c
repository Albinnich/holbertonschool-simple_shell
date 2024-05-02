#include "main.h"

/**
 * execute_command - Function to execute given command
 * @line: input from user
 * @argv: arguments array
 * Return: status
 */

void execute_command(char *line, char **argv)
{
	if (execve(line, argv, environ) == -1)
	{
		perror("execve");
		free(buffer);
		exit(EXIT_FAILED);
	}
}
