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
	int i2 = 0;
	int j2 = 0;
	int MAX = 10;
	int num1 = 0;
	int num2 = 0;

	alpha = 48;
	for (i = 0; i < MAX; i++)
	{
		for (j = 0; j < MAX; j++)
		{
			for (i2 =0 ; i2 < MAX ; i2++)
			{
				for (j2 = 0 ; j2 < MAX ; j2++)
				{
				num1 = 10 * i + j;
				num2 = 10 * i2 + j2;
				if (num2 > num1)
				{
				putchar(alpha + i);
				putchar(alpha + j);
				putchar(' ');
				putchar(alpha + i2);
				putchar(alpha + j2);
				if ((num1 * 100 + num2) < 9899)
				{
				putchar(',');
				putchar(' '); } } 
				}
			}
		}
       	}
	alpha = 10;
	putchar(alpha);
	return  (0);
}
