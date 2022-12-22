#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array of integers to be reversed
 * @n: the vnumber of elements in the array
 */
void reverse_array(int *a, int n)
{
	int tmp, inex;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[index] = tmp;
	}
}
