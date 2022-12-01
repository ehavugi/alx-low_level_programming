#include <stdlib.h>

/**
 * flip_bits -  return number of bit flips
 * @n: int
 * @m: int 2
 *
 * Return: Number of bit flips
 */
int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int setter = 1;
	int counts = 0;

	setter  =  n ^ m;

	while (setter > 0)
	{
		counts += setter % 2;
		setter = setter / 2;
	}
	return (counts);
}
