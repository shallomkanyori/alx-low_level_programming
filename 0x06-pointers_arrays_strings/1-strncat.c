#include "main.h"

/**
 * _strncat - concatenates two string by appending at most n bytes from src
 * @dest: The string to be appended to
 * @src: The string to be appended from
 * @n: The limit of bytes to be appended from src
 *
 * Return: A pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_cpy = dest;
	int i;

	while (*dest_cpy)
		dest_cpy++;

	for (i = 0; i < n && *src; i++)
	{
		*dest_cpy = *src;
		dest_cpy++;
		src++;
	}

	*dest_cpy = '\0';

	return (dest);
}
