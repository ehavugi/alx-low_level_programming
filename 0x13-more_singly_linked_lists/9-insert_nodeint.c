#include <stdlib.h>
#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i = 0;
	listint_t *current = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next =  NULL;

	while (i <= idx)
	{
		if (current == NULL)
		{
			return (NULL);
		}
		current = current->next;
		i += 1;
	}
	new->next = current->next;
	current->next =  new;

	return (*head);
}
