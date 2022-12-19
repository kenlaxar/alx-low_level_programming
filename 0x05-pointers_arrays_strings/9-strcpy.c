#include "main.h"

/**
 * _strcpy - copies the string pointed and terminates null bytes
 * @dest: this is destiny
 * @src: this is the copia
 * Return: return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
