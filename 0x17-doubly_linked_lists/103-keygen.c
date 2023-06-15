#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - print valid key for username program argument
 * @ac: the number of program arguments
 * @av: the program arguments
 *
 * Return: 0 on success, 1 on error.
 */
int main(int ac, char **av)
{
	char *username;
	char key[7];
	size_t len, add;
	unsigned int i, j;
	char *m = "A-CHRDw87lNS0E9B2TibgpnMVys5Xzvt0GJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	if (ac != 2)
	{
		printf("Usage: %s username\n", av[0]);
		return (1);
	}

	username = av[1];
	len = strlen(username);
	key[0] = m[(len ^ 59) & 63];

	for (i = 0, add = 0; i < len; i++)
		add += username[i];
	key[1] = m[(add ^ 79) & 63];

	for (i = 0, j = 1; i < len; i++)
		j *= username[i];
	key[2] = m[(j ^ 85) & 63];

	for (i = 0, j = username[0]; i < len; i++)
		if ((char)j <= username[i])
			j = username[i];
	srand(j ^ 14);
	key[3] = m[rand() & 63];

	for (i = 0, j = 0; i < len; i++)
		j += username[i] * username[i];
	key[4] = m[(j ^ 239) & 63];

	for (i = 0, j = 0; (char)i < username[0]; i++)
		j = rand();
	key[5] = m[(j ^ 229) & 63];

	printf("%s\n", key);
	return (0);
}
