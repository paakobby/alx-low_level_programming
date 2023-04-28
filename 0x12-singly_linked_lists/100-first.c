#include <stdio.h>

/**
 * _prints - prints before the main function is executed.
 */
void _prints(void) __attribute__ ((constructor));

void _prints(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
