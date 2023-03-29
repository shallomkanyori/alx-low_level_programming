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
	int res;

	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		{
			res = (*s1 < *s2) ? -15 : 15;
			break;
		}
	}

	if (*s1 && !(*s2))
		res = 15;
	else if (!(*s1) && *s2)
		res = -15;
	else if (!(*s1) && !(*s2))
		res = 0;

	return (res);
}
