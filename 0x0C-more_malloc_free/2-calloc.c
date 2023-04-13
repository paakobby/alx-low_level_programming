#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: unsigned int
 *
 * @size: unsigned int
 *
 * Return: a pointer to the allocated memory;
 * NULL if nmemb or size is 0;
 * NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;
	unsigned int j;
	char *c;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	i = nmemb * size;

	arr = malloc(i);

	if (arr == NULL)
	{
		return (NULL);
	}

	c = arr;
	for (j = 0; j < i; j++)
	{
		c[j] = 0;
	}

	return (arr);
}
