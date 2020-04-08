#include "holberton.h"

/**
 * end_of_file - end of file
 * Description: end of file
 * @line: char array to free
 * return: 0
 */

int end_of_file(char *line)
{
	free(line);
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "\n", 1);
	return (0);
}
