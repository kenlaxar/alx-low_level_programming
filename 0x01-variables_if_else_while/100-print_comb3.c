#include <stdio.h>
/**
 * main - Entry pont
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, d;

	for (c = '0'; c <= '9'; c++)
		for (d = c + 1; d <= 10;)
		{
			putchar(c);
			putchar(d);
			if (!(c == 8) || (d == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}