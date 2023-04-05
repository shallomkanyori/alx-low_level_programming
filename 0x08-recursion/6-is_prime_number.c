#include "main.h"

/**
 * is_prime_number_odd - checks if an integer is prime by checking for odd
 * factors
 * @n: the integer
 * @o: the odd number
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number_odd(int n, int o)
{
	if ((o * o) > n)
		return (1);

	if ((n % o) == 0)
		return (0);

	return (is_prime_number_odd(n, o + 2));
}

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: the number
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	if (n > 2 && n % 2 == 0)
		return (0);

	if (n == 2)
		return (1);

	return (is_prime_number_odd(n, 3));
}
