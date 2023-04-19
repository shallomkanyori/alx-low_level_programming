#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple arithmetic operations
 * @argc: the number of program arguments
 * @argv: the program arguments
 *
 * Return: If the number of arguments is not 4, if the operator is not in
 * [+, -, *, /, %] or if user tries to divide by 0 (/ or %), exit with the
 * status 98, 99 or 100 respectively. Otherwise, return 0.
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int res;
	char *op;
	int (*f_op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	f_op = get_op_func(op);
	if (f_op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*(op) == '/' || *(op) == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = f_op(a, b);
	printf("%d\n", res);
	return (0);
}
