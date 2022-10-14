#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program entry
 *
 * Return: 0 on success.  Error code otherwise
 **/
int main(void)
{
	int alpha;
	int i = 0;
	int j = 0;
	int MAX = 10;

	alpha = 48;
	while (i < MAX)
	{
		while (j < MAX)
		{
			if (i < j)
			{
				putchar(alpha + i);
				putchar(alpha + j);

			if ((i * 10 + j) < 89)
			{
				putchar(',');
				putchar(' ');
			}
			}
		j++;
		}
		j = 0;
		i++;
	}
	alpha = 10;
	putchar(alpha);
	return  (0);
}
