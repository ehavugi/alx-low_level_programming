/**
 * _memcpy -  copies memory area
 * @dest: to address of the memory
 * @src: source area of memory
 * @n: n bytes of memory to copy
 *
 * Return: dest pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index += 1;
	}
	return (dest);
}
