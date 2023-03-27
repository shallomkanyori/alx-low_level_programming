#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line
 * @str: The string to print
 *
 * Return: void.
 */
void puts2(char *str)
{
	int on = 1;

	while (*str)
	{
		if (on)
		{
			_putchar(*str);
			on = 0;
		}
		else
		{
			on = 1;
		}
		str++;
	}

	_putchar('\n');
}
