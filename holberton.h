#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include<sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>

int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char **tokenline(char *line);
char *alloc_memory(char *ch);
void freearrays(char *line, char *newline, char **tokens);
int end_of_file(char *line);
char *getvar(char *var, char **env);
char *getfullpath(char **command, char **env);
int freelines(char *ch1, char *ch2);
void execute_env(char **env);
int _putchar(char c);

#endif
