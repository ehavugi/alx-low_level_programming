#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: node
 * @index: the index
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	i = 0;
	node = NULL;
	if (head == NULL)
	{
		return (NULL);
	}
	if (index == 0)
	{
		node = head;
	}

	while (head->next != NULL)
	{
		if (index == i)
		{
			node = head;
		}
		i++;
		head = head->next;
	}
	return (node);
}
