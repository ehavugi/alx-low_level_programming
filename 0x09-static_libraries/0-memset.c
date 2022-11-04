/**
 * _memset - fill memory buffer with a constant byte.
 * @s: memory buffer location
 * @b: char to fill in
 * @n: number of bytes to buffer memory to fil.
 *
 * Return: s, the memory buffer location
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		s[index] = b;
		index += 1;
	}
	return (s);
}
