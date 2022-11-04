#include "main.h"

/**
 * _isupper - returns if a character is uppercase
 * @c: input character
 * Return: 1 if upper case, else 0
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
