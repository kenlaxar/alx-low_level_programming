#include "main.h"

/**
 * _strlen - funtion to get the length of a string
 * @s: string pointer passed to the string
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++);

	return (index);
}
