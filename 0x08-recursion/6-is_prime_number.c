/**
 * prime - return 1  if a prime number.
 * @x: input integer
 * @y: input  controlled for division.
 *
 * Return: returns if is_prime.
 */
int prime(int x, int y)
	{
		if (y <= 1)
		{
			return (1);
		}
		if (y == x)
		{
			return (1);
		}
		if ((x % y) == 0)
		{
			return (0);
		}
		return (prime(x, y - 1));
	}

/**
 * is_prime_number - return 1 if prime
 * n: input
 *
 * Return: 1 if prime else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, n - 1));
}
