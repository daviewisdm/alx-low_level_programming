#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer to pointer to the head of linked list.
 *
 * You are not allowed to use more than 1 loop.
 * You are not allowed to use malloc, free or arrays.
 * You can only declare a maximum of two variables in your function.
 *
 * There should be no memory leaks.
 *
 * Return:  the pointer to first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *former = NULL;
	listint_t *impend = NULL;

	while (*head != NULL)
	{
		impend = (*head)->next;
		(*head)->next = former;
		former = *head;
		*head = impend;
	}

	*head = former;
	return (*head);
}
