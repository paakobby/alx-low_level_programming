#include "main.h"

/**
 *_isalpha - checks for alphabetic character
 *@c: alphabetic character checked
 *Return: 1  if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
	_putchar('\n');
}
