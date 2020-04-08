#include "holberton.h"

/**
 * alloc_memory - allocates memory for char
 * Description: allocates memory for char
 * @ch: pointer to char array
 * Return: pointer to new memory
 */

char *alloc_memory(char *ch)
{
	int i = 0;
	char *aux;

	if (ch == NULL)
		return (NULL);
	while (ch[i] != '\n')
		i++;
	aux = malloc(sizeof(char) * i + 1);
	if (aux == NULL)
		return (NULL);
	i = 0;
	while (ch[i] != '\n')
	{
		aux[i] = ch[i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}
