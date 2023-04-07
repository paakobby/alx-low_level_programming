#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = argc - 1;

	printf("%d\n", i);
	(void) argv;
	return (0);
}
