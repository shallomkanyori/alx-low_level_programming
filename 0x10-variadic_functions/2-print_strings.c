#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, separated by a given separator, followed by
 * a new line
 * @separator: the string to be printed between the strings
 * @n: the number of string arguments passed
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	const char *str;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		if ((i != 0) && separator)
			printf("%s", separator);

		str = va_arg(strings, const char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}

	printf("\n");
	va_end(strings);
}
