#include <string.h>
#include <stdio.h>
#define MAX 50

/**
 * main  -- main  entry
 *
 *
 * Return: void
 */
int main(void)
{
	long int F0 = 1;
	long int F1 = 2;
	long int F2;
	int curr;

	for (curr = 0; curr < MAX; curr++)
	{
		if (curr == 0)
		{
			printf("1\n");
		}
		else if (curr == 1)
		{
			printf("2\n");
		}
		else
		{
			/* Get current Fib Num */
			F2 = F0 + F1;
			printf("%ld\n", F2);

			/* Update the fib value by previous fib */
			F0 = F1;
			F1 = F2;
		}
	}
	return (0);
}
