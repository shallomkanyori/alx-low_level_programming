#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to the buffer pointed to by
 * dest
 * @dest: Buffer to copy string to
 * @src: Pointer to string to be copied
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_cpy = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (dest_cpy);
}
