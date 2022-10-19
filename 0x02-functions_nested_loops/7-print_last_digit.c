#include "main.h"
#include <string.h>

/**
 * print_last_digit -- function entry
 *
 * @c : input number
 *
 * Return: 1 if lower 0 otherwise.  Error code otherwise
 **/
int print_last_digit(int c)
{
	int value_;

	if (c > 0)
	{
		value_ = c % 10;
		_putchar(value_ + '0');
		return (value_);
	}
	else
	{
		value_ = (-c) % 10;
		_putchar(value_ + '0');
		return (value_);
	}
}
