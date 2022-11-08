#include <stdlib.h>
#include <stdio.h>
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

	if (s1 == NULL)
	{
		index = 0;
	}
	else
	{
		while (s1[index] != '\0')
		{
			index++;
		}
		size += index;
		index = 0;
	}
	if (s2 == NULL)
	{
		index = 0;
	}
	else
	{
		while (s2[index] != '\0')
		{
			index += 1;
		}
		size += index;
		index = 0;
	}
	if (size == 0)
	{
		return (NULL);
	}

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
	s[index + index2] ='\0';
	return (s);
}
