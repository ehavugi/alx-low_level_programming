#include <stdarg.h>

/**
 * sum_them_all - sum allargs
 * @n:number of arguments?
 *
 * Return: int sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;
	int sum_ = 0;
	int holder = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);

	for (i = n ; i > 0; i -= 1)
	{
		holder = va_arg(ap, int);
		sum_ += holder;

	}
	va_end(ap);
	return (sum_);
}
