#include "main.h"

/**
 *_islower - checks for lowercase character
 *@c: lowercse character checked
 *Return: 1  if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
	_putchar('\n');
}
