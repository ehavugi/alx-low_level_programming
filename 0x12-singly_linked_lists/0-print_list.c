
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - print a linked list
 * @h: input
 *
 * Return: return size of the list
 */
size_t print_list(list_t *h)
{
	size_t index  = 0;
	list_t *x = h;

	if (h == NULL)
	{
		/*printf("[0] (nil)\n");*/
		return (0);
	}
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%u] %s\n", h->len, h->str);

	}
	index += 1;

	while (x->next != NULL)
	{
		x = x->next;
		if (x->str ==  NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%u] %s\n", x->len, x->str);
		}
		index += 1;
	}
	return (index);
}
