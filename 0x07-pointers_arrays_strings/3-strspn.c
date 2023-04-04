#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int c = 0;
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] != 32)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[b])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
