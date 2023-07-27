#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of list.
 * @head: pointer to singly linked list.
 * @str: pointer to signly linked list.
 *
 * str needs to be duplicated.
 * You are allowed to use strdup.
 *
 * Return: The address of the new element or NULL if it failed.
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
