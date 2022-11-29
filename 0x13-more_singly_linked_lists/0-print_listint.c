#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print a list of int
 * @h: list of int
 *
 * Return: number of ints
 */

size_t print_listint(listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		printf("%d\n", h->n);
		return (1 + print_listint(h->next));
	}
}
