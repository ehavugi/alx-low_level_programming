/**
 * is_prime_numnber - return 1  if a prime number.
 * @n: input integeer
 *
 * Return: returns if is_prime.
 */

int is_prime_number(int n)
{
	int index = 2;

	if (n <= 1)
	{
		return (0);
	}

	for (index = 2; index < n; index++)
	{
		if (n % index == 0)
		{
			return (0);
		}
	}
	return (1);
}
