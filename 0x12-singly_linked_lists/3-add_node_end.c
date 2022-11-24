
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen -  string length
 * @str: string lenghth
 *
 * Return: return int;
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len += 1;
		str++;
	}
	return (len);
}

/**
 * add_node_end - add node at beginning
 * @head: current head
 * @str: new string
 *
 * Return: return new list
 */
list_t *add_node_end(list_t **head, char *str)
{
	list_t *new;
	list_t *x = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (*head);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while(x->next!=NULL)
	{
		x = x->next;
	}
	x->next = new;
	return (*head);
}
