#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - added int in a list
 * @head: the list
 * @index: the index
 *
 * Return: new list
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *new_t = NULL;
	listint_t *new = NULL;

	if (*head ==  NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		new= current->next;
		free(head);
		*head = new;
		return (1);
	}
	while (i < index- 1)
	{
		if (current == NULL)
		{
			return (-1);
		}
		current = current->next;
		i += 1;
	}
	new_t = current->next->next;
	current =  new_t;
	return (1);
}
