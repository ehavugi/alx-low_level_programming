/**
 * _sqrt -  natural square root of a number.
 * @n: input
 * @y: control input for find. Can be initialized
 *
 * Return: sqrt or -1.
 */

int _sqrt(int n, int y)
{
	if (y * y  == n)
	{
		return (y);
	}
	if (y * y > n)
	{
		return (-1);
	}
	return (_sqrt(n, y + 1));
}

/**
 * _sqrt_recursion - find square root using recursion
 * @n: inpit
 *
 * Return: return sqrt or -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
