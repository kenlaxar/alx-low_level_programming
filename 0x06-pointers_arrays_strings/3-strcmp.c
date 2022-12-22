#include "main.h"

/**
 * _strcmp - function which compares two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * Return:
 * 		zero if s1 == s2
 * 		negative number if s1 < s2
 * 		positive number if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
