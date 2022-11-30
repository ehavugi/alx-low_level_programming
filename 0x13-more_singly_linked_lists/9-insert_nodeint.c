#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - added int in a list
 * @head: the list
 * @idx: the index
 * @n: new int
 *
 * Return: new list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *new_t = NULL;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next =  NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	while (i < idx - 1)
	{
		if (current == NULL)
		{
			return (NULL);
		}
		current = current->next;
		i += 1;
	}
	new_t = current->next;
	new->next = new_t;
	current->next =  new;
	return (*head);
}
