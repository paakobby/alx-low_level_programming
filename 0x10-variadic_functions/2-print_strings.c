#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings
 *
 * @separator: the string to be printed between the strings
 *
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a;  /* a = arguments */
	char *str;  /* str = string */

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(a, char*);

		if (str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", str);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(a);

	printf("\n");
}
