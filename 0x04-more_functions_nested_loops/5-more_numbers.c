#include "main.h"
#define TIMES 10 

/**
 * more_numbers- returns none.print 0 to 9
 * Return: void
 */

void more_numbers(void)
{
	int index;
	int c;

	for (index = 0; index < TIMES; index++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c >= 10)
			{
				_putchar(49);
				_putchar(48 + (c % 10));
			}
			else
			{
				_putchar(48 + c);
			}
		}
		_putchar('\n');
	}
}
