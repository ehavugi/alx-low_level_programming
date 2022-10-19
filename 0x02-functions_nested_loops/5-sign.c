#include "main.h"
#include <string.h>

/**
 * print_sign -- function entry
 *
 * @c : input alphabet
 *
 * Return: 1 if lower 0 otherwise.  Error code otherwise
 **/
int  print_sign(int c)
{
	if (c > 0)
	{	_putchar(43);
		return (1);
	}
	else if (c == 0)
	{	_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
