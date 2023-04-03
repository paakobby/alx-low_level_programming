#include "main.h"
/**
 * _memset - fills a block of memory with a constant byte
 * @s: memory area appointed
 * @b: constant byte
 * @n: first number of bytes filled
 * Return:  pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned char a = (unsigned char) b;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		p[i] = a;
	}
	return (s);
}
