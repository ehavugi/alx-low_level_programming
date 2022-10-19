#include "main.h"
#include <string.h>

/**
 *  times_table-- function entry
 *
 *
 * Return: void
 **/
void times_table(void)
{
	int result;
	int i;
	int j;

	for (i = 0 ; i < 10; i++)
	{
		for (j = 0 ; j < 10; j++)
		{
			result = i * j;
			if (j != 0)
			{
				_putchar(' '); 
			}
			if (result < 10)
		}
		if (j == 0)
		{
			_putchar(result + '0');
		}
		else
		{
			_putchar(' ');
			_putchar(result + '0');
		}`
	else
	{
		_putchar((result / 10) + '0');
	       	_putchar((result % 10) + '0');
	}
	if (j  < 9)
	{
		_putchar(',');
	}
	else
	{
		_putchar('\n');
	}
}

	
