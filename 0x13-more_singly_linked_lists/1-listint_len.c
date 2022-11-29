#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - count number of elements in a list of int
 * @h: list of int
 *
 * Return: number of ints
 */

size_t listint_len(listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		return (1 + listint_len(h->next));
	}
}
