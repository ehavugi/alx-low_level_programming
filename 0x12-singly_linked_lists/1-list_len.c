#include <stdlib.h>
#include "lists.h"
/**
 * list_len - return number of elements
 * @h:input
 *
 * Return: number of elements
 */

size_t list_len(list_t *h)
{
	size_t len = 0;
	list_t *x = h;

	if (x != NULL)
	{
		len += 1;
	}
	while (x->next != NULL)
	{
		len += 1;
		x = x->next;
	}
	return (len);
}
