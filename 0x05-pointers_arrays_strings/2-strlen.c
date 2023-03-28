#include "main.h"
/**
 *_strlen - function that returns the length of a string
 * @s: string whose length is returned
 * Return: length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
