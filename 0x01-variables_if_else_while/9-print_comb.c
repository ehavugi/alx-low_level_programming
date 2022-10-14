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
	int MAX = 10;

	alpha = 48;
	while (i < MAX)
	{
		putchar(alpha + i);
		if (i < MAX - 1)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	alpha = 10;
	putchar(alpha);
	return  (0);
}
