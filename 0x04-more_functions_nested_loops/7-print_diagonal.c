#include "main.h"

/**
 * print_diagonal- returns none. print diagonal of length n
 * @n: length of the line
 * Return: void
 */

void print_diagonal(int n)
{
	int index;
	int index2;

	for (index = 0; index < n; index++)
	{
		for (index2 = 0; index2 < index; index2++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (index != n - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
