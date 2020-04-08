#include "holberton.h"

/**
 * freearrays - frees all the arrays
 * Description: frees all the arrays
 * @line: user input
 * @newline: new line instead of line
 * @tokens: tokens array
 * Return: nothing
 */

void freearrays(char *line, char *newline, char **tokens)
{
	int i = 0;

	while (tokens[i] != NULL)
	{
		free(tokens[i]);
		i++;
	}
	free(tokens[i]);
	free(line);
	free(newline);
	free(tokens);
}
