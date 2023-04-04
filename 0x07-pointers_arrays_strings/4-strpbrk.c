#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates the first occurrence in the string 's'
 * of any of the bytes in the string 'accept'
 * @s: string
 * @accept: string
 * Return: a pointer to the byte in 's' that matches one of the bytes in
 * 'accept' or 'NULL' if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;
	char *b;

	for (a = s; *a != '\0'; a++)
	{
		for (b = accept; *b != '\0'; b++)
		{
			if (*a == *b)
			{
				return (char *)a;
			}
		}
	}
	return (NULL);
}
