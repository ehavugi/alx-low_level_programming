#include "main.h"
/**
 * print_rev - print a string in reverse followed by a new line
 * @s: string input
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int index = 0;

	/* Find the length of string */
	while (s[length] != '\0')
	{
		length += 1;
	}
	/* Reverse the string */
	while (index <= length)
	{
		_putchar(s[length - index]);
		index += 1;
	}
	_putchar('\n');
}
