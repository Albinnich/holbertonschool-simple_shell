#include "main.h"
#include <string.h>

/**
 * line_div - divides string into parts
 * @command: Command string for parsing
 * @arr: Array of strings for storing arguments
 *
 * Return: Char array
 */

char **line_div(char *command, char **arr)
{
	char *token;
	int i = 0;

	token = strtok(command, " \n\t");
	while (token != NULL && i < 63)
	{
		arr[i++] = token;
		token = strtok(NULL, " \n\t");
	}
	arr[i++] = NULL;
	return (arr);
}
