#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d, w;

	for (d = 0; d < 100; d++)
	{
		for (w = 0; w < 100; w++)
		{
			if (d < w)
			{
				putchar((d / 10) + 48);
				putchar((d % 10) + 48);
				putchar(' ');
				putchar((w / 10) + 48);
				putchar((w % 10) + 48);
				if (d != 98 || w != 99)
				{
					putchar(',');
					putchar('.');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
