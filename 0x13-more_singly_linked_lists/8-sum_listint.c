#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - return sum of elements
 * @head: list
 *
 * Return:  sum of elements
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *head_i = head;
	while (head_i != NULL )
	{
		sum += head_i->n;
		head_i = head_i->next;
	}
	return (sum);
}
