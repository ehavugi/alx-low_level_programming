#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - length of string
 * @s: input strng
 *
 * Return: size of string
 */
unsigned int _strlen(char *s)
{
	unsigned int index = 0;

	while (s[index] != '\0')
	{
		index += 1;
	}
	return (index);
}

/**
 * stripends - remove starting and last char other than null
 * @s: input string
 *
 * Return: substring malloced
 */
char *stripends(char *s)
{
	char *out;
	unsigned int index = 1;

	out = malloc(_strlen(s));
	if ((_strlen(s) == 1 || _strlen(s) == 0))
	{
		return ('\0');
	}
	else
	{
		while (index < _strlen(s) - 1)
		{
			out[index - 1] = s[index];
			index += 1;
		}
		out[_strlen(s) - 2] = '\0';
		return (out);
	}
}

/**
 * is_palindrome - check if a palindrome
 * @s: input string
 *
 * Return: 1 if a palindrome else 0
 */

int is_palindrome(char *s)
{
	int length = _strlen(s);

	if (_strlen(s) == 1 || _strlen(s) == 0)
	{
		return (1);
	}
	else
	{
		return (is_palindrome(stripends(s)) && (s[0] == s[length - 1]));
	}
}
