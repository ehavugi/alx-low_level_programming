/**
 * reverse_array - reverse the content of array of int
 * @a: array of integers
 * @n: the number of int in a
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int index  = 0;
	int interm;

	while (index < n - index - 1)
	{
		interm = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = interm;
		index += 1;
	}
}

