#include <unistd.h>

/**
 * _putchar - Writes our character c to stdout
 * @c: Character to be printed
 *
 * Return: 1(Success)
 * Upon error, -1 returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
