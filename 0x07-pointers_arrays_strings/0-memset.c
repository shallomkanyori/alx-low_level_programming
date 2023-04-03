#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with
 * the constant byte b
 * @s: the pointer to the memory area
 * @b: the byte to fill the memory area with
 * @n: the number of bytes to fill
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *s_cpy = s;

	while (i < n)
	{
		*s_cpy = b;
		s_cpy++;
		i++;
	}

	return (s);
}
