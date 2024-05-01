#include "main.h"

/**
 * _getline - Function to implement getline
 *
 * Return: NULL
 */

char *_getline(void)
{
	char *line = NULL;
	size_t size = 0;
	int check;

	check = getline(&line, &size, stdin);
	if (check == -1)
		free(line);
	else
		return (line);
	return (NULL);
}
