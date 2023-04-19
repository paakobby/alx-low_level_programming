#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array.
 *
 * @array: array with elements
 *
 * @size: size of the array
 *
 * @action: pointer to the function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}
