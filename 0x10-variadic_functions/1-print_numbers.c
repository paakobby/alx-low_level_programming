#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers- function that prints numbers
 *
 * @separator: the string to be printed between numbers
 *
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;  /* a = arguments */
	unsigned int i;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a, int));

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(a);

	printf("\n");
}
