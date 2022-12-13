#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c = 'a';

	for (c <= 'z'; c++)
		for (c = 1; c <= 10)
		{
			_putchar(c);
			c++;
		}
	_putchar('\n');
	return (0);
}
