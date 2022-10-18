#include "main.h"
#include <string.h>

/**
 * main - Program entry
 *
 * Return: 0 on success.  Error code otherwise
 **/
int main(void)
{
	unsigned long int i;
	char s[20] = "_putchar";
	char ender[2] = "\n";

	for (i = 0; i < strlen(s); i++)
	{
		_putchar(s[i]);
	}
	_putchar(ender[0]);

	return (0);
}
