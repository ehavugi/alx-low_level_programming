/**
 * _pow_recursion - returns of x raised to the power of y
 * @x: input 1
 * @y: input 2
 *
 * Return: returns x^y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
