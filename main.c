#define _GNU_SOURCE
#include <stdio.h>
#include "holberton.h"

/**
 * main - entry point for shell program
 * Description: function will read a line, break it into tokens, and execute
 * @argc: number of arguments
 * @argv: arguments passed
 * @env: environment
 * the call, then return to main when end of file is reached
 * Return: 0 when EOF is reached (ie user presses Ctrl + D)
 */

int main(int argc, char **argv, char **env)
{
	char *line, *newline;
	size_t length = 0;
	ssize_t bytes;
	char **tokens;
	int pid;

	(void)argc;
	while (1)
	{
		line = NULL;
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "($) ", 4);
		bytes = getline(&line, &length, stdin);
		if (bytes == EOF)
			return (end_of_file(line));
		newline = alloc_memory(line);
		if (newline == NULL)
		{
			free(line);
			return (0);
		}
		if (_strcmp(newline, "exit") == 0 && _strlen(newline) > 0)
			free(line), free(newline), exit(0);
		else if (_strcmp(newline, "env") == 0 && _strlen(newline) > 0)
			execute_env(env);
		tokens = tokenline(newline);
		if (tokens == NULL)
			return (freelines(line, newline));
		pid = fork();
		if (pid == 0)
		{
			if (newline[0] != '\0')
				if (execve(getfullpath(tokens, env), tokens, NULL) == -1)
					perror(argv[0]), exit(127);
		}
		else
			wait(NULL);
		freearrays(line, newline, tokens);
	}
}
