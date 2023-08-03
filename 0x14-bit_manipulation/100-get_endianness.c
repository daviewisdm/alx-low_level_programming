#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 *
 * Return: 0 if big-endian, 1 if little-endian.
 */

int get_endianness(void)
{
	unsigned int n = 1; /* 00 00 00 01 */
	char *x = (char *) &n;

	/**
	 * if little endian, n will be stored in memory as
	 * 01 00 00 00, so *x = 1
	 */
	if (*x)
		return (1);
	/* otherwise return 0 meaning it is big-endian */
	return (0);
}
