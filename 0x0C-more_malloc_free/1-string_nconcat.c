#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: unsigned int
 *
 * Return: a pointer that points to a newly allocated space in memory
 * which contains the contents of s1, followed by the first n bytes of s2
 * and null terminated. if NULL is passed, it is treated like an empty string
 * The function returns NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len;
	unsigned int s2_len;
	char *new_str;
	char *c;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	s1_len = 0;
	while (s1[s1_len])
	{
		++s1_len;
	}
	s2_len = 0;
	while (s2[s2_len] && s2_len < n)
	{
		++s2_len;
	}
	new_str = malloc(s1_len + s2_len + 1);
	if (!new_str)
	{
		return (NULL);
	}
	c = new_str;
	while (*s1)
	{
		*c++ = *s1++;
	}
	while (*s2 && s2_len--)
	{
		*c++ = *s2++;
	}
	*c = '\0';

	return (new_str);
}
