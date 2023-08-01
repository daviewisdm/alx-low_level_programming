#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a singly linked list.
 * @head: pointer to the head of linked list.
 *
 * Return : NULL
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
