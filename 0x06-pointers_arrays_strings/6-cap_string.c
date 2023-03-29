#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: The string to be converted
 *
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *str)
{
	char *str_cpy = str;
	int in = 0; /* tracks whether we're inside word*/

	while (*str_cpy)
	{
		if (is_separator(*str_cpy))
		{
			in = 0;
		}
		else
		{
			if (!in && *str_cpy >= 'a' && *str_cpy <= 'z')
				*str_cpy = *str_cpy - 'a' + 'A';

			in = 1;
		}

		str_cpy++;
	}

	return (str);
}

/**
 * is_separator - checks if character is a word separator
 * @c: The character to be checked
 *
 * Return: 1 if character is separator. Otherwise 0.
 */
int is_separator(char c)
{
	return (c == ' ' || c == '\n' || c == '\t' || c == ',' || c == ';' ||
			c == '.' || c == '!' || c == '?' || c == '"' || c == '(' ||
			c == ')' || c == '{' || c == '}');
}
