#include "main.h"
/**
 * _puts - print a string, followed by a newline to stdout
 * @str: string input
 *
 * Return: void
 */
void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index += 1;
	}
	_putchar('\n');
}
