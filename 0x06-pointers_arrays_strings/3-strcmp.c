#include "main.h"

/**
 * _strcmp - compares two strings exaclty like strcmp
 * @s1: First string
 * @s2: Second string
 *
 * Return: -15, 0, 15 if first string is less than, equal to, or greater than
 * second string respectively.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
