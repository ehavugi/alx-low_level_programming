#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print list
 * @h: head
 * Return: size of list
 */
size_t print_dlistint(dlistint_t *h)
{
	dlistint_t *curr = h;
	size_t n;

	n = 0;
	if (curr == NULL)
	{
		return (0);
	}
	while (curr->prev != NULL)
	{
		curr  = curr->prev;
	}

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		n += 1;
	}
	return (n);
}
