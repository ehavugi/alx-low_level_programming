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
	int z = 0;
	int MAX = 10;

	alpha = 48;
	while (i < MAX)
	{
		while (j < MAX)
		{
			while (z < MAX)
			{
				if ((i < j) & (j < z))
				{
					putchar(alpha + i);
					putchar(alpha + j);
					putchar(alpha + z);
					if ((i * 100 + j * 10 + z) < 789)
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;


			}
			z = 0;
			j++;
		}
		j = 0;
		i++;
	}
	alpha = 10;
	putchar(alpha);
	return  (0);
}
