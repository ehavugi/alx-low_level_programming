#include "main.h"
/**
 * _puts_recursion - recursive implementation of puts
 * @str: string input
 *
 * Return: Nothing
 */

void _puts_recursion(char *str)
{
	if (str[0] == '\0')
	{
		_putchar('\n');
		return ();
	}
	_putchar(str[0]);
	_puts_recursion(&str[1]);
}
