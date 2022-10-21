#include "main.h"

/**
 * print_line- returns none. print aline of length n
 * @n: length of the line
 * Return: void
 */

void print_line(int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
