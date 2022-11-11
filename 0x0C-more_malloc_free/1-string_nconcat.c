#include <stdlib.h>
/**
 * _strlen - string length
 * @str: input string
 *
 * Return: unsigned teger size of string
 */
int _strlen(char *str)
{
	unsigned int size = 0;

	while (str[size] != '\0')
	{
		size += 1;
	}
	return (size);
}
/**
 * string_nconcat - concatenate two strings s1 and s2 with a length of s2
 * @s1: first string
 * @s2: second string
 * @n: Number of characters from second string to add.
 *
 * Return: pointer to newly allocated mem contaings s1 concat s2
 */



char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *out;
	unsigned int size1;
	unsigned int size2;
	unsigned int mem;
	unsigned int index = 0;

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	if (size2 > n)
	{
		mem = size1 + n + 1;
	}
	else
	{
		mem = size1 + size2 + 1;
	}

	out = malloc(mem);
	if (out == NULL)
	{
		return (NULL);
	}
	else
	{
		while (index < size1)
		{
			out[index] = s1[index];
			index += 1;
		}
		index = 0;
		while (index + size1 < mem - 1)
		{
			out[index + size1] = s2[index];
			index += 1;
		}
		out[mem - 1] = '\0';
	}
	return (out);
}


