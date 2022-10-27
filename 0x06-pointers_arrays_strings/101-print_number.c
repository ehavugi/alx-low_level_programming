#include "main.h"
/**
 * print_number - print int using _putchar function
 * @n : input integer
 *
 * Return: void
 */

void print_number(int n)
{
	int depth = 0;
	int n_new = n;
	int interm = 0;

	/* Handle special case of signed value */
	if (n < 0)
	{
		n = -1 * n;
		n_new = n;
		_putchar('-');

	}

	/* Get depth or 10's of a number */
	while (n / 10 != 0)
	{
		depth += 1;
		n = n / 10;
	}

	/* print starting from largest tens to smalest */
	while (depth >= 0)
	{
		interm = depth;
		n = n_new;
		while (interm > 0)
		{
			n = n / 10;
			interm -= 1;
		}
		depth -= 1;
		_putchar((n % 10) + '0');
	}
}

