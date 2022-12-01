#include <stdlib.h>

/**
 * clear_bit - clear bit at a given index to 0
 * @n: int
 * @index: index
 *
 * Return: 1 if success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setter = 1;

	if (index > sizeof(*n) * 4)
	{
		return (-1);
	}
	*n = *n & (~(setter << index));
	return (1);
}
