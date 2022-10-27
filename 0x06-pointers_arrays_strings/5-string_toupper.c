/**
 * string_toupper - change all lowercase letters to an uppercase
 * @s: input char
 *
 * Return: a transformed string
 */
char *string_toupper(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] >= 'a' && s[index] <= 'z')
		{
			s[index] = s[index] - 32;
		}
		index += 1;
	}
	return (s);
}
