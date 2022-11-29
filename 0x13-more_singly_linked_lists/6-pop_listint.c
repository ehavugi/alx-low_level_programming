#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - return n of head and delete the head
 * @head: the list
 *
 * Return: void
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *next;

	if (*head == NULL)
	{
		return (n);
	}
	n = (*head)->n;
	next = (*head)->next;
	free(*head);
	*head = next;
	return (n);
}
