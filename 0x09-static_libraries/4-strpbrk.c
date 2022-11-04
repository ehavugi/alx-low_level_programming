#include <stdio.h>
/**
 * _strpbrk -- search a string for any set of bytes
 * @s: string to search in
 * @accept: the string set to set
 *
 * Return: pointer to start of found substring or NULL if not found.
 */

char *_strpbrk(char *s, char *accept)
{
	int index = 0;
	int index2 = 0;
	char *out = '\0';

	while (s[index] != '\0')
	{
		while (accept[index2] != '\0')
		{
			if (s[index] == accept[index2])
			{
				out = &s[index];
				return (out);
			}
			index2 += 1;
			/* printf("%s, %s, %s\n", &s[index], &accept[index2], out); */
		}
		index += 1;
		index2 = 0;
	}
	return ('\0');
}
