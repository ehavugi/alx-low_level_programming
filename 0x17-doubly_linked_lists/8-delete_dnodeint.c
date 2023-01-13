#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index -  delete a node at index
 * @h: head
 * @idx: index
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr;
	curr = *h;
	
	i = 0;
	if (curr == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		
		if (curr->next == NULL)
		 {
			 return (-1);
		 }
		curr = curr->next;
		curr->prev = NULL;
		*h = curr;
		return (1);
	}
	while (curr != NULL)
	{
		if (i == (index - 1))
		{
			if (curr->next!= NULL)
			{
				curr->next= (curr->next)->next;
				return (1);
			}
			else
			{
				return (-1);
			}
		}
		i++;
		if (curr->next == NULL)
		{
			break; }
		curr = curr->next; }
	while (curr->prev != NULL)
	{
		curr = curr->prev;}
	*h = curr;
	if (i >= index)
	{
		return (1); }
	return (-1);
}
