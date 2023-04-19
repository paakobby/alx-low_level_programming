#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: array with elements
 *
 * @size: number of elements in array
 *
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: -1 if no element matches and -1 if size is less or equals 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	}
	return (-1);
}
