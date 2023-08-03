#include "main.h"

/**
 * print_binary - function that prints bin represenatation of a n.
 * @n: integer.
 *
 * You are not allowed to use arrays.
 * You are not allowed to use malloc.
 * You are not allowed to use the % or / operators.
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	int p, count = 0;
	unsigned long int recent;

	for (p = 63; p >= 0; p--)
	{
		recent = n >> p;

		if (recent & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
