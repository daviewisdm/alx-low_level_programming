#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - prints sum
 * @argc: parameter
 * @argv: array of command
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result = 0, x, i, j, k;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
			printf("%s\n", "Error");
			return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		x = atoi(argv[k]);
		result += x;
	}
	printf("%d\n", result);
	return (0);
}
