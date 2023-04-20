#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters to sum up
 *
 * Return: If n is 0, return 0. Otherwise, return the sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int res = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		res += va_arg(args, int);
	}

	return (res);
}
