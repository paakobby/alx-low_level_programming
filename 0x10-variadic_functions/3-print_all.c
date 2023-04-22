#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - function that prints anything.
 *
 * @format: list of types of arguments passed to the function
 *a = arguments, str = string
 */
void print_all(const char * const format, ...)
{
	int i;
	int j;
	char *str_arg;
	va_list a;

	va_start(a, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(a, int));
				j = 0;
				break;
			case 'i':
				printf("%i", va_arg(a, int));
				j = 0;
				break;
			case 'f':
				printf("%f", va_arg(a, double));
				j = 0;
				break;
			case 's':
				str_arg = va_arg(a, char*);
				if (str_arg == NULL)
					str_arg = "(nil)";
				printf("%s", str_arg);
				j = 0;
				break;
			default:
				j = 1;
				break;
		}
		if (format[i + 1] != '\0' && j == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(a);
}
