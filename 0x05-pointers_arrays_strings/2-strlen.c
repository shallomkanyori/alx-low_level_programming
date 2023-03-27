#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string whose length is to be returned
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}
