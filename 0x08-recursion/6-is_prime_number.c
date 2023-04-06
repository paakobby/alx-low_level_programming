#include "main.h"

/**
 * is_prime_number - function that determines if a number is a prime or not
 *
 * @n: number
 *
 * Return: 1 if the input integer is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n >= 2)
	{
		if (n > 2 && n % 2 == 0)
		{
			return (0);
		}
		else if (n == 3 || n == 5 || n == 7)
		{
			return (1);
		}
		else if (n > 10)
		{
			if (n % 10 == 3 || n % 10 == 1 || n % 10 == 7 || n % 10 == 9)
			{
				return (1);
			}
			else if (n % 10 == 5)
			{
				return (0);
			}
		return (1);
		}
	}
	else if (n % (n - 1) == 0)
	{
		return (0);
	}
		return (is_prime_number(n - 1));
}
