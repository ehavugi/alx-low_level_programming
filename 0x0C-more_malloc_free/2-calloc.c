#include <stdlib.h>

/**
 * _calloc - allocate mem as calloc does
 * @nmemb: number of members
 * @size: size of each member
 *
 * Return:pointer to the allocated memory
 * (yet to find a way to set values to zero);
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *out;
	unsigned int index = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		out = malloc(nmemb * size);
	}

	if (out ==  NULL)
	{
		return (NULL);
	}
	while (index < nmemb * size)
	{
		index += 1;
	}
	return (out);
}
