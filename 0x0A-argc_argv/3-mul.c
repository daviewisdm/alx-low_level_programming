#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - multiply
 * @argc: parameter
 * @argv: array of command
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result, x, y;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;

	printf("%d\n", result);
	return (0);
}
