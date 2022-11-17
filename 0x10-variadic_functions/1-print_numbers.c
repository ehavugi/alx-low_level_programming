#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - print numbers
 * @separator: seperator to use
 * @n: number of numbers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int index;

	va_start(ap, n);
	for (index = n; index > 0; index -= 1)
	{
		if (index == (int) n)
		{
			printf("%d", va_arg(ap, int));
		}
		else
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
			printf("%d", va_arg(ap, int));
		}
	}
	printf("\n");
}

