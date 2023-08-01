#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pass = head;
	listint_t *act = head;

	if (!head)
		return (NULL);

	while (pass && act && act->next)
	{
		act = act->next->next;
		pass = pass->next;
		if (pass == act)
		{
			pass = head;
			while (pass != act)
			{
				pass = pass->next;
				act = act->next;
			}
			return (act);
		}
	}

	return (NULL);
}
