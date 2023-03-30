#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: The string whose length is to be returned
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;

	return (i);
}

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 *
 * Return: nothing.
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char tmp;

	for (; s[j]; j++)
		;

	j--;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}

/**
 * infinite_add - adds two numbers
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer that will store the result
 * @size_r: The buffer size
 *
 * Return: A pointer to the sum of the two numbers if the result can be stored
 * in r. Otherwise 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = _strlen(n1);
	int len2 = _strlen(n2);
	int carry = 0;
	int sum = 0;
	int ind1 = len1 - 1;
	int ind2 = len2 - 1;
	int res_ind = 0;
	int d1, d2;

	if (len1 >= size_r || len2 >= size_r)
		return (0);

	while (ind1 >= 0 || ind2 >= 0 || carry > 0)
	{
		d1 = ind1 >= 0 ? n1[ind1] - '0' : 0;
		d2 = ind2 >= 0 ? n2[ind2] - '0' : 0;
		sum = d1 + d2 + carry;
		carry = sum / 10;

		if (res_ind >= (size_r - 1))
			return (0);

		r[res_ind] = (sum % 10) + '0';

		res_ind++;
		ind1--;
		ind2--;
	}

	if (res_ind == size_r)
		return (0);

	r[res_ind] = '\0';
	rev_string(r);
	return (r);
}
