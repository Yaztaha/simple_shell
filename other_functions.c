#include "holberton.h"

/**
 * end_of_file - end of file
 * Description: end of file
 * @line: char array to free
 * Return: 0
 */

int end_of_file(char *line)
{
	free(line);
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "\n", 1);
	return (0);
}

/**
 * getvar - searches for an environment variable and returns its value
 * Description: searches for an environment variable and returns its value
 * @var: name of the environment variable
 * @env: environment
 * Return: value of the environment variable or NULL if not found
 */

char *getvar(char *var, char **env)
{
	int i, j = 0;

	if (var == NULL || env == NULL)
		return (NULL);
	for (i = 0 ; env[i] != '\0' ; i++)
	{
		while (env[i][j] == var[j])
			j++;
		if (env[i][j] == '=')
		{
			j++;
			return (&(env[i][j]));
		}
		j = 0;
	}
	return (NULL);
}

/**
 * getfullpath - search for complete path of a command and returns it
 * Description: search for complete path of a command and returns it
 * @command: command to search
 * @env: the environment .
 * Return: path of command or NULL if not found.
 */

char *getfullpath(char **command, char **env)
{
	char *thepath, *token, *path, *newpath, *ch;
	struct stat st;

	thepath = getvar("PATH", env);
	path = malloc(_strlen(thepath) + 1);
	memset(path, 0, _strlen(thepath) + 1);
	if (path == NULL)
		return (NULL);
	_strcpy(path, thepath);
	ch = malloc(_strlen(command[0]) + 2);
	memset(ch, 0, _strlen(command[0]) + 2);
	if (ch == NULL)
	{	free(path);
		return (NULL);
	}
	_strcat(ch, "/");
	_strcat(ch, command[0]);
	token = strtok(path, ":");
	while (token != NULL)
	{
		newpath = malloc(sizeof(char *) *
				 (_strlen(token) + _strlen(ch) + 1));
		memset(newpath, 0, sizeof(char *) *
				(_strlen(token) + _strlen(ch) + 1));
		if (newpath == NULL)
			return (NULL);
		_strcpy(newpath, token);
		_strcat(newpath, ch);
		newpath[_strlen(token) + _strlen(ch)] = '\0';
		if (stat(newpath, &st) == 0)
			return (newpath);
		token = strtok(NULL, ":");
		free(newpath);
	}
	free(path);
	return (command[0]);
}

/**
 * freelines - frees char arrays
 * Description: frees char arrays
 * @ch1: char array to free
 * @ch2: char array to free
 * Return: 0
 */

int freelines(char *ch1, char *ch2)
{
	free(ch1), free(ch2);
	return (0);
}

/**
 * execute_env - prints env
 * Description: prints env
 * @env: environment
 * Return: 0
 */

void execute_env(char **env)
{
	int i, j;

	for (i = 0 ; env[i] != '\0' ; i++)
	{
		for (j = 0 ; env[i][j] != '\0' ; j++)
			_putchar(env[i][j]);
		_putchar('\n');
	}
}
