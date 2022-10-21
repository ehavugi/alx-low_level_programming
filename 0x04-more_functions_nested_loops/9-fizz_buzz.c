#include <stdio.h>

/**
 * main - return void, print numbers 0 to 100 and fizz, buzz
 * Return: 0 , otherwise error code
 */

int main(void)
{
	int index;

	for (index = 1; index <= 100; index++)
	{
		if ((index % 3) == 0)
		{
			printf("Fizz");
		}
		if ((index % 5) == 0)
		{
			printf("Buzz");
		}
		if (!(((index % 5) == 0) || ((index % 3) == 0)))
		{
			printf("%d", index);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
