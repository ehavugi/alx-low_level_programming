#include "main.h"

/**
 * print_square - returns none. print square of side lenght n
 * @n: length of side
 * Return: void
 */

void print_square(int n)
{
	int index;
	int index2;

	for (index = 0; index < n; index++)
	{
		for (index2 = 0; index2 < n; index2++)
		{
			_putchar('#');
		}
		if (index != n - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
