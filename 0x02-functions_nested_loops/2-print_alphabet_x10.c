#include "main.h"

/**
 *print_alphabet_x10 - print 10 times the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int times = 0;
	char alpha;

	while (times++ <= 9)
	{
		for (alpha = 'a' ; alpha <= 'z' ; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
