#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: The destination string to be append to
 * @src: The string to be appended
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *dest_cpy = dest;

	while (*dest_cpy)
		dest_cpy++;

	while (*src)
	{
		*dest_cpy = *src;
		dest_cpy++;
		src++;
	}

	*dest_cpy = '\0';

	return (dest);
}
