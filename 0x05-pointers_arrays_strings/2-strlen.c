#include "main.h"

/**
 * _strlen - funtion to get the length of a string
 * @s: string pointer passed to the string
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
