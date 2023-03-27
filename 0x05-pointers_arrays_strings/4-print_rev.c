#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: The string to be printed
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	s--;
	while (len > 0)
	{
		_putchar(*s);
		s--;
		len--;
	}

	_putchar('\n');
}
