#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @str: string to be changed
 * Return: returns a character
 */
char *string_toupper(char *)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;

		index++;
	}

	return (str);
}
