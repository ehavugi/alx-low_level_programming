#include <stdlib.h>

/**
 * _realloc - realloc mem
 * @ptr: input 1
 * @old_size: old size of memory block
 * @new_size: new size of memory block to alloc
 *
 * Return: pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *out;
	unsigned int index = 0;
	char *ptr1;


	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		out = malloc(new_size);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	out = malloc(new_size);

	if (out == NULL)
	{
		return (NULL);
	}
	ptr1 = ptr;
	while (index < old_size && index < new_size)
	{
		out[index] = ptr1[index];
		index += 1;
	}
	free(ptr);


	return (out);
}
