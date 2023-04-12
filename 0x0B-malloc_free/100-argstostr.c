#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 *
 * @ac: int
 *
 * @av: char
 *
 * Return: NULL if ac == 0 or av == NULL; a pointer to a new string
 * or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int len = 0;
	int i;
	char *arg;
	char *new_str;
	int j = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg != '\0')
		{
			len++;
			arg++;
		}
		len++;
	}
	len++;

	new_str = (char *)malloc(sizeof(char) * len);
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg != '\0')
		{
			new_str[j++] = *arg;
			arg++;
		}
		new_str[j++] = '\n';
	}
	new_str[j] = '\0';
	return (new_str);
}
