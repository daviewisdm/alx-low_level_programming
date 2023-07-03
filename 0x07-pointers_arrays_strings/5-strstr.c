#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input string to search for matching substrings
 * @needle: input subtring to search for
 * Return: a pointer to the beginning of the located substring
 * Otherwise - NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
