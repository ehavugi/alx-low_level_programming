#include "main.h"
#include <string.h>

/**
 * print_alphabet - function entry
 *
 * Return: 0 on success.  Error code otherwise
 **/
void print_alphabet(void)
{
	unsigned long int i;
	char s[30] = "abcdefghijklmnopqrstuvwxyz";
	char ender[2] = "\n";

	for (i = 0; i < strlen(s); i++)
	{
		_putchar(s[i]);
	}
	_putchar(ender[0]);

}
