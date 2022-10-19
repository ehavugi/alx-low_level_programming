#include <string.h>
#include <stdio.h>
#define MAX 98

/**
 * main  -- main  entry
 *
 *
 * Return: void
 */
int main(void)
{
	double F0 = 1;
	double F1 = 2;
	double F2;
	int curr;

	for (curr = 0; curr < MAX; curr++)
	{
		if (curr == 0)
		{
			printf("1, ");
		}
		else if (curr == 1)
		{
			printf("2, ");
		}
		else
		{
			/* Get current Fib Num */
			F2 = F0 + F1;
			if (curr < MAX - 1)
			{
				printf("%.0f, ", F2);
			}
			else
			{
				printf("%.0f\n", F2);
			}

			/* Update the fib value by previous fib */
			F0 = F1;
			F1 = F2;
		}
	}
	return (0);
}
