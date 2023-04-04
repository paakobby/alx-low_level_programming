#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals of a square matrix
 * of integers
 *
 * @a: pointer
 *
 * @size: size of matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int h;
	int i;
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		h = (i * size) + i;
		sum1 += *(a + h);
	}
	for (j = 0; j < size; j++)
	{
		h = (j * size) + (size - 1 - j);
		sum2 += *(a + h);
	}
	printf("%d, %d\n", sum1, sum2);

}
