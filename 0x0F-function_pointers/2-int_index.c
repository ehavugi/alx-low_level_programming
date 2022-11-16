/**
 * int_index - int index
 * @array: array to search in
 * @size: size of array
 * @cmp: comparator func
 *
 * Return: index if found or -1;
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	while (index < size)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
		index += 1;
	}
	return (-1);
}
