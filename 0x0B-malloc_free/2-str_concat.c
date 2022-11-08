#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - string length
 * @str: input string
 *
 * Return: return length of string as int
 */
int _strlen(char *str)
{
	int index = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (str[index] != '\0')
	{
		index += 1;
	}
	return (index);
}

/**
* str_concat - concatenate two strings
* @s1: string 1
* @s2: string 2
*
* Return: return a pointer to allocated memory containing s1, followed by s2.
*/


char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int size = 0;
	unsigned int index = 0;
	unsigned int index2 = 0;

	index = _strlen(s1);
	size = index;
	index = _strlen(s2);
	size += index;
	index = 0;

	s = malloc(size + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		if (s1 != NULL)
		{
			while (s1[index] != '\0')
			{
				s[index] = s1[index];
				index++;
			}
		}
		if (s2 != NULL)
		{
			while (s2[index2] != '\0')
			{
				s[index + index2] = s2[index2];
				index2++;
			}
		}
	}
	s[index + index2] = '\0';
	return (s);
}
