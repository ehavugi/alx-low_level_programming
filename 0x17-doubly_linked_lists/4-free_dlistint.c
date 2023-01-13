#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - free list
 * @head: list
 * Return:void
 */
void free_dlistint(dlistint_t *head)
{
	/*transverse to end of list*/
	dlistint_t *curr;

	if (head == NULL)
	{
		return;
	}
	while (head->next != NULL)
	{
		head = head->next;
	}
	while (head->prev != NULL)
	{
		curr = head->prev;
		free(head);
		head = curr;
	}
	free(head);

}
