#include "main.h"

/**
 * _sqrt_recursion_odd - recursively computes and returns the square root of a
 * number by taking away odd numbers
 * @n: the number
 * @k: we're taking away the kth odd number
 *
 * Return: the natural square root of n if n has one, otherwise -1.
 */
int _sqrt_recursion_odd(int n, int k)
{
	int o = 2 * k - 1;

	if ((n - o) == 0)
		return (k);

	if ((n - 0) < 0)
		return (-1);

	return (_sqrt_recursion_odd(n - o, k + 1));
}

/**
 * _sqrt_recursion - recursively compute and return the square root of a number
 * @n: the number
 *
 * Return: the natural square root of n if n has one, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	return (_sqrt_recursion_odd(n, 1));
}
