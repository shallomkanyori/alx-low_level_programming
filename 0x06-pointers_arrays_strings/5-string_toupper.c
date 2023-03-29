#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: The string to be converted
 *
 * Return: A pointer to the resulting string.
 */
char *string_toupper(char *str)
{
	char *str_cpy = str;

	while (*str_cpy)
	{
		if (*str_cpy >= 'a' && *str_cpy <= 'z')
			*str_cpy = *str_cpy - 'a' + 'A';

		str_cpy++;
	}

	return (str);
}
