#include <stdio.h>

/**
 * _isdigit- returns if a character is a digit
 * @c: input character
 * Return: 1 if digit, else 0
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _isnum - returns if a string is numeric
 * @str: string input
 *
 * Return: 1 if numeric else 0
 */

int _isnum(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{

		if (_isdigit(str[index]) == 0 && !(index == 0 && str[index] == '-'))
		{
			return (0);
		}
		index += 1;
	}
	return (1);
}

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
	int _sum = 0;
	int index = 1;

	if (argc == 1)
	{
		printf("%d\n", _sum);
		return (0);
	}
	if (argc > 1)
	{
		while (index < argc)
		{
			if (_isnum(argv[index]))
			{
				_sum += _atoi(argv[index]);
			}
			else
			{
				printf("Error, %d, %d\n", index, argc);
				return (1);
			}
			index += 1;
		}
	}
	printf("%d\n", _sum);
	return (0);
}
