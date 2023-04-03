#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: the memory area to copy to
 * @src: the memory area to copy from
 * @n: the number of bytes to copy
 *
 * Return: A pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *dest_cpy = dest;

	while (i < n)
	{
		*dest_cpy = *src;
		dest_cpy++;
		src++;
		i++;
	}

	return (dest);
}
