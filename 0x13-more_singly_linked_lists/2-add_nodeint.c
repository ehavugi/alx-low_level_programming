#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add integer at beginning
 * @head: the head of current list
 * @n: new entry to add at the beginning
 *
 * Return: new augmented list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first = malloc(sizeof(listint_t));

	if (first == NULL)
	{
		return (*head);
	}
	first->n = n;
	first->next = *head;
	*head = first;
	return (*head);
}
