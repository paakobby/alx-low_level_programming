#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 *
 * @s: char wwith a pointer with a pointer
 *
 * @to: char with a pointer
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
