#include "main.h"
#include <stdlib.h>

/**
 * array_range- function that creates an array of integers
 *
 * @min: int
 *
 * @max: int
 *
 * Return: a pointer to the newly created array;
 *  if min > max, return NULL, if malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	arr = malloc(sizeof(*arr) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
