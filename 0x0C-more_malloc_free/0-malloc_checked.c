#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocate memeory and return pointer
 * @b: size of memoery to be allocated
 *
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *hello;

	hello = malloc(b);
	if (hello == NULL)
	{
		exit(98);
	}
	else
	{
		return (hello);
	}

}
