#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t.
 * @h: pointer to the list.
 *
 * if str is NULL print [0] (nil).
 * You are allowed to use printf.
 *
 * Return: the number of nodes.
 * @return size_t
 */

size_t print_list(const list_t *h)
{
	size_t elem;

	elem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		elem++;
	}
	return (elem);
}
