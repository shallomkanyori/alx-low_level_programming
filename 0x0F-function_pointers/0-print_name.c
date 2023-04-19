#include "function_pointers.h"

/**
 * print_name - calls a function that prints a name
 * @name: name of the person
 * @f: pointer to the function that will print name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
