#include "holberton.h"

/**
 * _strlen - give the lenght of a string
 *@s: int pointer type variable
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);

}

/**
 * _strcpy - copies the string pointed to by src
 * @dest: char type array pointer
 * @src: char type integer variable
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strcmp - compares two strings
 *@s1: char pointer type variable
 *@s2: char pointer type variable
 * Return: an int
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
