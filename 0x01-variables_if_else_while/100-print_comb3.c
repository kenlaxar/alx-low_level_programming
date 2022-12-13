#include <stdio.h>
/**
 * main - Entry pont
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;
	int d = c + 1;

	for (c = '0'; c <= '9'; c++)
		for (d = '0'; d <= '9'; d++)
		{
			if (!(c == d) || (c > d))
			{
				putchar(c);
				putchar(d);
				if (!(d == '9' && c == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');
	return (0);
}
