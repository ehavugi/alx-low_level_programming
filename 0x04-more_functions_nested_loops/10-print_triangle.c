#include "main.h"

/**
 * print_triangle - returns none. print trianngle of side lenght n
 * @n: length of side
 * Return: void
 */

void print_triangle(int n)
{
	int index;
	int index2;

	for (index = 0; index < n; index++)
	{
		for (index2 = 0; index2 < n; index2++)
		{
			if (index < (n - index2 - 1))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		if (index != n - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
