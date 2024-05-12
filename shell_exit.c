#include "main.h"

/**
 * shell_exit - Handles the exit status
 * @status: The status code
 *
 * Return: Nothing.
 **/

void shell_exit(int status)
{

	if (WIFEXITED(status))
		exit(WEXITSTATUS(status));
	else
		exit(0);
}
