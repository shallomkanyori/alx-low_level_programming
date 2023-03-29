#include "main.h"

/**
 * _strncpy - copies a string from src to dest using exactly n bytes
 * @dest: The string to be copied to
 * @src: The string to be copied from
 * @n: The number of bytes to copy
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
