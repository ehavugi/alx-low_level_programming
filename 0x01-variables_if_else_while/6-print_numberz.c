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

	alpha = 48;
	while (i < 10)
	{
		putchar(alpha + i);
		i++;
	}
	alpha = 10;
	putchar(alpha);
	return  (0);
}
