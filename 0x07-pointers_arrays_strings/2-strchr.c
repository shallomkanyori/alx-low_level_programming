#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to check
 * @c: the character to find
 *
 * Return: A pointer to the first occurrence of the character c in the string
 * s or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			break;
		s++;
	}

	if (*s || c == '\0')
		return (s);
	else
		return (0);
}
