#include "main.h"

/**
 * _isdigit- returns if a character is a digit
 * @c: input character
 * Return: 1 if digit, else 0
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
