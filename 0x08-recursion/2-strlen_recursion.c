#include "main.h"

/**
 * _strlen_recursion - recursive implementation of strlen
 * @s: input string
 *
 * Return: length of a string as strlen
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	return 1 + _strlen_recursion(&s[1]);
}
