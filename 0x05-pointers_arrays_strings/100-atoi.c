#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
	int res = 0;
	unsigned int u_res = 0;
	int negative = 0;
	int prev_num = 0;

	while (*s)
	{
		if (*s == '-')
		{
			negative = !negative;
		}
		else if (*s >= '0' && *s <= '9')
		{
			prev_num = 1;
			u_res = u_res * 10 + (*s - '0');

			if (u_res > 2147483648)
			{
				u_res = 0;
				break;
			}
		}
		else if (prev_num)
		{
			break;
		}

		s++;
	}

	if (u_res == 2147483648 && !negative)
		u_res = 0;

	res = negative ? -u_res : u_res;
	return (res);
}
