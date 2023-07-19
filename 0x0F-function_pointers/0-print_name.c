#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints a name.
 * @name: pointer to name.
 * @f: pointer to function.
 *
 * Return: No return.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
