#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * @n: parameter number
 *
 *Return: 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list a; /* a = arguments */
	unsigned int i;

	va_start(a, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(a, int);
	}

	va_end(a);

	return (sum);
}
