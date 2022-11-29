#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free list
 * @head: the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	else
	{
		free_listint(head->next);
		free(head);
	}
}
