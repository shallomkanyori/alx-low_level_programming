#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _print - prints the given string
 * @str: the string to print
 *
 * Return: nothing.
 */
void _print(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
}

/**
 * contains_only_digits - checks if the given string contains only digits
 * @str: the string to check
 *
 * Return: 1 if the string contains only digits. Otherwise 0.
 */
int contains_only_digits(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		if (str[i] < '0' || str[i] > '9')
			return (0);

	return (1);
}


/**
 * multiply - multiplies two positive numbers
 * @n1: the string containing the first number
 * @n2: the string containing the second number
 * @res: the string to store the result
 * @len1: the length of n1
 * @len2: the length of n2
 *
 * Return: Nothing.
 */
void multiply(char *n1, char *n2, char *res, int len1, int len2)
{
	int i, j, carry, tmp;
	int len = len1 + len2;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			tmp = (n1[i] - '0') * (n2[j] - '0') + (res[i + j + 1] - '0') + carry;
			res[i + j + 1] = tmp % 10 + '0';
			carry = tmp / 10;
		}

		res[i + j + 1] += carry;
	}

	for (i = 0; i < len && res[i] == '0'; i++)
		;

	if (i == len)
	{
		res[1] = '\0';
	}
	else
	{
		for (j = 0; j < (len - i); j++)
			res[j] = res[i + j];

		res[j] = '\0';
	}
}

/**
 * mul - multiplies two positive numbers
 * @n1: the string containing the first number
 * @n2: the string containing the second number
 *
 * Return: A string containing the result if successful. Otherwise, NULL.
 */
char *mul(char *n1, char *n2)
{
	char *res;
	char *tmp;
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int len = len1 + len2;

	res = malloc(sizeof(char) * (len + 1));

	if (res == NULL)
		return (NULL);

	memset(res, '0', (len + 1));

	multiply(n1, n2, res, len1, len2);

	len = strlen(res);
	if (len != (len1 + len2))
	{
		tmp = malloc(sizeof(char) * (len + 1));

		if (tmp == NULL)
		{
			free(res);
			return (NULL);
		}

		memcpy(tmp, res, len + 1);
		free(res);

		res = tmp;
	}

	return (res);
}

/**
 * main - multiplies two positive numbers and prints the result
 * @argc: the number of program arguments
 * @argv: the program arguments
 *
 * Return: If number of arguments is incorrect or either of the numbers do not
 * contain only digits, exit with status value 98. Otherwise return 0.
 */
int main(int argc, char *argv[])
{
	char *n1;
	char *n2;
	char *res;

	if (argc != 3)
	{
		_print("Error\n");
		exit(98);
	}

	n1 = argv[1];
	n2 = argv[2];

	if (!(contains_only_digits(n1)) || !(contains_only_digits(n2)))
	{
		_print("Error\n");
		exit(98);
	}

	res = mul(n1, n2);

	if (res == NULL)
	{
		_print("Error\n");
		exit(98);
	}

	_print(res);
	_print("\n");
	free(res);

	return (0);
}
