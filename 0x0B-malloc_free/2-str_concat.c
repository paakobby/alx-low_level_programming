#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: a pointer that points to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2
 * and null terminated. if NULL is passed, it is treated like an empty string.
 * The function returns NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len;
	int s2_len;
	char *new_str;
	int i;
	int j;

	s1_len = s2_len = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			s1_len++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			s2_len++;
	}

	new_str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; j < s2_len; j++, i++)
	{
		new_str[i] = s2[j];
	}
	new_str[s1_len + s2_len] = '\0';
	return (new_str);
}
