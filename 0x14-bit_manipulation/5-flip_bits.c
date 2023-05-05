#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: 1st number
 *
 * @m: 2nd number
 *
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	unsigned long int result = 1;
	unsigned int i;
	unsigned int j = 0;

	for (i = 0 ; i < 64 ; i++)
	{
		if (result == (difference & result))
		{
			j++;
		}

		result <<= 1;
	}

	return (j);
}
