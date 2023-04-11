#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 *
 * @str: string
 *
 * Return: a pointer to a new string which is a duplicate of the string 'str'
 * NULL if str = NULL
 */
char *_strdup(char *str)
{
	int len;
	char *dup_str;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)

	dup_str = (char *) malloc((sizeof(char) * len) + 1);
	if (dup_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		dup_str[i] = str[i];
	}
	dup_str[len] = '\0';
	return (dup_str);
}
