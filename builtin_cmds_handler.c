#include "main.h"

/**
* handle_builtin_commands - Handles builtin commands
* @cmd: The command to be handled
* @args: The list of arguments
* @status: The status code
*
* Return: 0 on success, 1 otherwise.
*/

int handle_builtin_commands(char *cmd, char **args, int status)
{

	if (strcmp(args[0], "exit") == 0)
	{
		free(cmd);
		shell_exit(status);
	}
	else if (strcmp(args[0], "env") == 0)
	{
		get_env();
		return (1);
	}

	return (0);
}
