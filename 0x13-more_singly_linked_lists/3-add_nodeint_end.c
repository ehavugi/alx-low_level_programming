#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add a node a the end
 * @head: head node
 * @n: new integer
 *
 * Return: new node as head node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x = *head;
	listint_t *last = malloc(sizeof(listint_t));

	if (last == NULL)
	{
		return (*head);
	}
	last->n = n;
	last->next = NULL;
	if (*head == NULL)
	{
		*head = last;
		return (*head);
	}
	while (x->next != NULL)
	{
		x = x->next;
	}
	x->next = last;

	return (*head);
}
