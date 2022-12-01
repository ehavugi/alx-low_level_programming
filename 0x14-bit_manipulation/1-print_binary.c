#include "main.h"
#include <stdio.h>
/**
 * print_binary  - print binary
 * @n: int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int len = 0;
	unsigned int value = 0;

	while ((n >> len) > 0)
	{
		len += 1;
	}
	while (len >= 0)
	{
		value = (n >> (len - 1)) - (n >> len << 1);
		len -= 1;
		if (value <= 1)
		{
			_putchar('0' + value);
		}
	}

}
