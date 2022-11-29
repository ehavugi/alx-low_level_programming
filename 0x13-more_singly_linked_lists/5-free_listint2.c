#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free list
 * @head: list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
	{
		free(*head);
		*head = NULL;
		return;
	}
	else
	{
		free_listint2(&((*head)->next));
		free(*head);
	}
	*head = NULL;
}
