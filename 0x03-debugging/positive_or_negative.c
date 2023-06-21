#include "main.h"

/**
 * main - Determines if a number is positive, negative or zero
 *
 * Return: Always 0 on Success
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "Negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "Positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
	return;
}
