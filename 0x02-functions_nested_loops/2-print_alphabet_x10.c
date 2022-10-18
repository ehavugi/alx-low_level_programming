#include "main.h"
#include <string.h>

/**
 * print_alphabet_x10 -- function entry
 *
 * Return: 0 on success.  Error code otherwise
 **/
void print_alphabet_x10(void)
{
	int j;
	unsigned long int i;
	char s[30] = "abcdefghijklmnopqrstuvwxyz";
	char ender[2] = "\n";

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < strlen(s); i++)
		{
			_putchar(s[i]);
		}
		_putchar(ender[0]);
	}

}
