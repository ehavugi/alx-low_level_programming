#include <stdlib.h>
/**
 * array_iterator - array iterator
 * @array: array input
 * @size: number of elemements in array
 * @action: what to do to eacch element
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index = 0;

	if (array == NULL || action ==  NULL)
	{
		return;
	}
	while (index < size)
	{
		action(array[index]);
		index += 1;
	}
}
