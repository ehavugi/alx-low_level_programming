#include<stdio.h>
/**
 * print_array - print n elements of array of integers, followed by a newline
 * @a: input array
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
