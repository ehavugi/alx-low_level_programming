
/**
 * print_name - print name with f
 * @name: name
 * @f: func to print with
 *
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
