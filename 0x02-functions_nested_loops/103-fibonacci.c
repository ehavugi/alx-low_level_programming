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
	long int cumsum = 0;

	for (curr = 0; curr < MAX; curr++)
	{
		if (curr == 0)
		{
			F2 = 1;
		}
		else if (curr == 1)
		{
			F2 = 2;
		}
		else
		{
			/* Get current Fib Num */
			F2 = F0 + F1;
			/* Update the fib value by previous fib */
			F0 = F1;
			F1 = F2;
		}
		if ((F2 % 2) && (F2 < 4000000))
		{
			cumsum += F2;
		}
	}
	printf("%ld\n", cumsum);
	return (0);
}
