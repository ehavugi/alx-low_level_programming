#include <stdlib.h>

/**
 * array_range - creates an array of int
 * @min: minimum, first element of array
 * @max: max, last element of array
 *
 * Return: pointer to array or NULL if max < min or error
 */
int *array_range(int min, int max)
{
	int *out;
	int index = 0;

	if (min > max)
	{
		return (NULL);
	}

	out =  malloc(sizeof(int) * (max - min + 1));
	if (out ==  NULL)
	{
		return (NULL);
	}
	while (min + index <= max)
	{
		out[index] = min + index;
		index += 1;
	}
	return (out);
}
