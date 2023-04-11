#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 *
 * @size: number of bytes
 * @c: char
 *
 * Return: NULL if size = 0; a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (size <= 0)
	{
		return (NULL);
	}
	else if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	return (array);
}
