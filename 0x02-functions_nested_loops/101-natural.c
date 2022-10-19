#include <string.h>
#include <stdio.h>
#define MAX 10

/**
 * main  -- main  entry
 *
 *
 * Return: void
 */
void main(void)
{
	int sum = 0;
	int curr = 0;

	for (curr = 0; curr < MAX ; curr++)
	{
		if (((curr % 5) == 0) || ((curr % 3) == 0))
		{
			sum += curr;
		}
	}
	printf("%d\n", sum);
}

