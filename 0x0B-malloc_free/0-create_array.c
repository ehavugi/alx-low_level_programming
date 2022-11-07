#include <stdlib.h>
/**
 * create_array - create an array of size size and initialized with char c
 * @size: size of the array
 * @c: the char to initializ  with.
 *
 * Return: point to array or null.
 */



char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int index = 0;

	if (size == 0)
	{
		return ('\0');
	}
	str = malloc(sizeof(c) * size);

	if (str == NULL)
	{
		return (str);
	}

	while (index < size)
	{
		str[index] = c;
		index += 1;
	}
	return (str);
}

