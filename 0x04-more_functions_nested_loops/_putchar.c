#include <unistd.h>

/**
 *_putchar - Writes a character to the standard output
 *   *
 *@c: the character to write
 *Return: the number of characters written
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

