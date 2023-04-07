#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that multiplies two numbers
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
