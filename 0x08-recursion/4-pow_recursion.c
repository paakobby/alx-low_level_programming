#include "main.h"

/**
 * _pow_recursion - function that returns the value of 'x'
 * raised to the power of 'y'
 *
 * @x: base number
 *
 * @y: exponent number
 *
 * Return: result of x to the power y. if y is lower than 0, '-1' is returned
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
