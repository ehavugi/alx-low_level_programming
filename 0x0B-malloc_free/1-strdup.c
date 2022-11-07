#include <stdlib.h>

/**
 * _strdup -  copy a string to a new allocated mem.
 * @str: string to copy
 *
 * Return: a pointer to a malloc created string
 */

char *_strdup(char *str)
{
	int index = 0;
	int size = 0;
	char *out;

	while (str[size] != '\0')
	{
		size++;
	}
	if (size == 0)
	{
		return ('\0');
	}

	out = malloc(sizeof(char) * (size + 1));
	if (out == NULL)
	{
		return ('\0');
	}
	while (index < size)
	{
		out[index] = str[index];
		index++;
	}
	return (out);
}
