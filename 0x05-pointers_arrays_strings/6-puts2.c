#include "main.h"
/**
 * puts2 - print every other char of string starting with first char.
 * followed by new line
 * @str: string input
 *
 * Return: void
 */

void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if ((index % 2) == 0)
		{
			_putchar(str[index]);
		}
		index += 1;
	}
	_putchar('\n');
}
