#include <stdio.h>
/**
 * _strspn - get the length of a prefix substring.
 * @s: string
 * @accept: strings to accept
 *
 * Return: Length of prefix substring consisting of only bytes from accepts
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index = 0;
	unsigned int index2 = 0;
	int accepted = 0;

	while (s[index] != '\0')
	{
		while (accept[index2] != '\0')
		{
			if (s[index] == accept[index2])
			{
				accepted = 1;
			}
			index2 += 1;
		}
		if (accepted == 0)
		{
			return (index);
		}
		index += 1;
		accepted = 0;
		index2  = 0;
	}
	return (index);
}
