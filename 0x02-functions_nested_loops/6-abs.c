#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The number whose absolute value is to be computed
 *
 * Return: The absolute value of the number
 */
int _abs(int n)
{
	int result;

	if (n < 0)
		result = n * -1;
	else
		result = n;

	return (result);
}
