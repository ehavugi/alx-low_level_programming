#include "main.h"
#include <string.h>

/**
 * jack_bauer -- function entry
 *
 *
 * Return: 1 if lower 0 otherwise.  Error code otherwise
 **/
void jack_bauer()
{
	for(int i ; i < 24, i++)
	{	if (i < 10)
		{
			_putchar('0');
			_putchar(i+'0');
			_putchar(':');
		}
		else
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
		}


	}
}
	
