#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index -  insert a node
 * @h: head
 * @idx: index
 * @n: node int
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *curr;
	dlistint_t *new;

	curr = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL); }
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	i = 0;
	if (idx == 0)
	{
		curr->next = curr;
		curr->prev = curr;
		*h = curr;
		return (curr); }
	while (curr != NULL)
	{
		if (i == (idx - 1))
		{
			new->prev = curr;
			new->next = curr->next;
			curr->next = new; }
		i++;
		if (curr->next == NULL)
		{
			break; }
		curr = curr->next; }
	while (curr->prev != NULL)
	{
		curr = curr->prev; }
	*h = curr;
	if (i >= idx)
	{
		return (new); }
	return (NULL);
}
