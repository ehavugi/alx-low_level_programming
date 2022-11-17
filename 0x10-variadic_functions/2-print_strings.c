#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - print strings
 * @separator: seperator to use
 * @n: number of numbers
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int index;
	char *str;

	va_start(ap, n);
	for (index = n; index > 0; index -= 1)
	{
		str = va_arg(ap, char *);
		if (index == (int) n)
		{
			if (str != NULL)
			{
				printf("%s", str);
			}
			else
			{
				printf("(nil)");
			}
		}
		else
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
			if (str != NULL)
			{
				printf("%s", str);
			}
			else
			{
				printf("(nil)");
			}

		}
	}
	printf("\n");
}

