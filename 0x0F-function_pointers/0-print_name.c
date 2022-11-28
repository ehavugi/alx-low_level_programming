#include <stdlib.h>
/**
 * print_name - print name with f
 * @name: name
 * @f: func to print with
 *
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f ==  NULL)
		return;
	f(name);
}
