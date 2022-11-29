#include <stdlib.h>
#include "lists.h"

void free_listint2(listint_t **head)
{
	if (*head == NULL)
	{
		return;
	}
	else
	{
		free_listint2(&((*head)->next));
		free(*head);
	}
	*head = NULL;
}
