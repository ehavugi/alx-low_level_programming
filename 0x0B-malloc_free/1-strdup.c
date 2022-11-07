#include <stdlib.h>

/**
 * _strdup -  copy a string to a new allocated mem.
 * @str: string to copy
 *
 * Return: a pointer to a malloc created string
 */

char *_strdup(char *str)
{
	unsigned int index = 0;
	unsigned int size = 0;
	char *out;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}

	out = malloc(size + 1);
	if (out == NULL)
	{
		return (NULL);
	}
	while (index < size)
	{
		out[index] = str[index];
		index++;
	}
	return (out);
}
