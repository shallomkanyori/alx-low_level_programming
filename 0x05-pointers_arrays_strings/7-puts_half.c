#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: The string whose half if to be printed
 *
 * Return: void.
 */
void puts_half(char *str)
{
	char *s = str;
	int len = 0;
	int i;

	while (*s)
	{
		len++;
		s++;
	}

	i = 0;
	while (*str)
	{
		if (i > ((len - 1) / 2))
			_putchar(*str);

		i++;
		str++;
	}

	_putchar('\n');
}
