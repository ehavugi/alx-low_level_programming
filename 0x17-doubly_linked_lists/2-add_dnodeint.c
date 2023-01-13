#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * add_dnodeint  - add new element on head
 * @head:head of a curr list
 * @n: new int
 * Return: new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *curr;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	curr = *head;
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (curr == NULL)
	{
		*head = new;
		return (*head);
	}
	while (curr->prev != NULL)
	{
		curr = curr->prev;
	}
	curr->prev = new;
	new->next  = curr;
	*head = new;
	return (*head);
}
