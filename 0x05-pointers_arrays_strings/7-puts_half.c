#include "main.h"
/**
 * puts_half - prints second half of a string, followed by newline
 * @str: string input
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int index  = 0;

	/* Find the length of  the string */
	while (str[length] != '\0')
	{
		length += 1;
	}

	/*print second half of a string */
	for (index = (length + 1) / 2; index < length; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
