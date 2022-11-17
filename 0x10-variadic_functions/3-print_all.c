#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - print all
 * @format: format string
 *
 * Return:void
 */
void print_all(const char * const format, ...)
{
	int index = 0;
	va_list  ap;
	int x = 0;
	char *str;

	va_start(ap, format);
	while (format[index] != '\0')
	{
		if (index != 0  && x != 1)
		{
			printf(", "); }
		x = 0;
		switch (format[index])
		{
		case 'c':
			{
			printf("%c", (char)va_arg(ap, int)); }
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
		{
			str = va_arg(ap, char *);
			if (str == NULL)
			{
				printf("(nil)"); }
			else
			{
				printf("%s", str); } }
			break;
		default:
			x = 1;
			break; }
		index += 1; }
	printf("\n"); }
