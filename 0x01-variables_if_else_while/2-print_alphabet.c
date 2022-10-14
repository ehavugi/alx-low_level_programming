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
	char alpha;
	int i = 0;

	alpha = 'a';
	while (i < 26)
	{
		putchar(alpha + i);
		i++;
	}
	alpha = '\n';
	putchar(alpha);
	return  (0);
}
