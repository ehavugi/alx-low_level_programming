#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free memory used by linked list
 * @head: list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return ();
	}
	if (head->next == NULL)
	{
		free(head->str);
		free(head->next);
		free(head);
		return ();
	}
	free_list(head->next);
	free(head->str);
	free(head);
}
