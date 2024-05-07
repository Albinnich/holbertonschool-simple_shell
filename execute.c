#include "main.h"

/**
 * execute_command - Function to execute given command
 * @command: Input from user
 * Return: Result.
 */

void execute_command(char *command)
{
	if (execve(command, NULL, NULL) == -1)
		perror(command);
}
