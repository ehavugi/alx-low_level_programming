#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - sum all elements of list
 * @head:list
 * Return:sum
 */
int sum_dlistint(dlistint_t *head)
{
	int n;

	n = 0;
	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}

	return (n);
}
