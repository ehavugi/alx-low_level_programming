#include <stdio.h>
/**
 * _atoi - return number in string. like atoi in the standard library
 * @s: string input
 *
 * Return: integer found in string s , else 0.
 */
int _atoi(char *s)
{
	int current = 0;
	int sign = 1;
	int before_int = 1;
	unsigned int current_int = 0;
	int int_ended = 0;

	while (s[current] != '\0')
	{
		/* track sign */
		if (s[current] == '-' && before_int != 0)
		{
			sign = sign * -1;
		}
		if (s[current] <= '9' && s[current] >= '0' && (!int_ended))
		{
			before_int = 0;
			current_int = current_int * 10 + s[current] - '0';
		}
		else
		{
			if (!before_int)
			{
				int_ended = 1;
			}
		}
		current +=  1;
	}
	return (current_int * sign);
}

/**
 * main - main function
 * @argc: number of argumentzs
 * @argv: array of string
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int coins;
	int value;
	int _25s;
	int _10s;
	int _5s;
	int _2s;
	int _1s;

	if (argc == 2)
	{
		value = _atoi(argv[1]);
		if (value <= 0)
		{
			printf("0\n");
		}
		else
		{
			_25s = value / 25;
			_10s = (value - 25 * _25s) / 10;
			_5s = (value - 25 * _25s - 10 * _10s) / 5;
			_2s = (value - 25 * _25s - 10 * _10s - 5 * _5s) / 2;
			_1s = (value - 25 * _25s - 10 * _10s - 5 * _5s - 2 * _2s);
			coins = _25s + _10s + _5s + _2s + _1s;

			printf("%d\n", coins);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
