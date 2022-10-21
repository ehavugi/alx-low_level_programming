#include <stdio.h>
#define MAX_VALUE 100

/**
 * main - return void, print numbers 0 to 100 and fizz, buzz
 * Return: 0 , otherwise error code
 */

int main(void)
{
	int index;

	for (index = 1; index <= MAX_VALUE; index++)
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
		if (index < MAX_VALUE)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
