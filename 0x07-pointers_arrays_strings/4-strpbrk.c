#include "main.h"

/**
 * _strpbrk - Entry point for any of a set of bytes
 * @s: inputs the string to be searched
 * @accept: inputs set of bytes to be searched for
 * Return: If no set is matched NULL
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
