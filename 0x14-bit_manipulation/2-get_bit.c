#include <stdio.h>
/**
 * get_bit - get bit at index
 * @n: int
 * @index: index to look at
 *
 * Return: index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int out = 0;

	out = ((n >> index) % 2);
	return (out);
}
