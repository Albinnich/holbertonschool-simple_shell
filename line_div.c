#include "main.h"
#include <string.h>

/**
 * line_div - divides string into parts
 * @line: Command string for parsing
 * @args: Array of strings for storing arguments
 *
 * Return: Char array.
 */

int line_div(char *line, char *args[])
{
	int num_tokens = 0;
	char *token;

	/* Tokenize the line into commands and store them in cmds */
	token = strtok(line, " \n");

	while (token)
	{
		args[num_tokens] = token;
		token = strtok(NULL, " \n");
		num_tokens++;
	}

	args[num_tokens] = NULL;

	return (num_tokens);
}
