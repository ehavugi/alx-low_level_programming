/**
 * _strcpy - copy a string pointed to by src to a buffer pointed to by dest
 * @dest: a pointer to a buffer that we will copy to
 * @src: source string
 *
 * Return: pointer to dest, a char pointer
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index += 1;
	}
	dest[index] = src[index];
	return (dest);
}
