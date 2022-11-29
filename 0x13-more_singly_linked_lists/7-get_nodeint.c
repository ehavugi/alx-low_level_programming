#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return head of list at index
 * @head: list
 * @index: the location
 * Return: new node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i =  0;

	if (index <= 0 || head == NULL)
	{
		return (NULL);
	}

	while (head != NULL && i < index)
	{
		i += 1;
		head = head->next;
	}
	return (head);
}
