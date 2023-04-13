#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: unsigned int
 *
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int *arr;

	arr = malloc(sizeof(*arr) * b);
	if (arr == NULL)
	{
		exit(98);
	}
	return (arr);
}
