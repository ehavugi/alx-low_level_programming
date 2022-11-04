/**
 * _strchr - locate a char in a string
 * @s: string input
 * @c: the char to locate
 *
 * Return: pointer to the char in string or NULL if none found.
 */
char *_strchr(char *s, char c)
{
	unsigned int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] == c)
		{
			return (&s[index]);

		}
		index +=  1;
	}
	return ('\0');
}
