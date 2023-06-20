#include <stdio.h>

/**
 * main - Lists all the natural numbers that are multiples of 3 or 5 upto 1024
 * Return: Always 0 (success)
 */

int main(void)

{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
