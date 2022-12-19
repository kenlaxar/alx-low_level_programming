#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 */
void print_alphabet_x10(void)
{
	int ten = 0;
	char c;

	for (ten = 0; ten < 10; ten++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
