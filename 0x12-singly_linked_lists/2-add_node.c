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
 * add_node - add node at beginning
 * @head: current head
 * @str: new string
 *
 * Return: return new list
 */
list_t *add_node(list_t **head, char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
