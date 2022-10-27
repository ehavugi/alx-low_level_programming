#include "main.h"
/**
 * rev_string - reverse a string. Changes the input string
 * @s: input string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int index = 0;
	char interm;

	/* find string length */
	while (s[length] != '\0')
	{
		length += 1;
	}
	for (index = 0; index < (length - 1 - index); index++)
	{
		interm = s[index];
		s[index] = s[length - 1 - index];
		s[length - 1 - index] = interm;
	}
}
