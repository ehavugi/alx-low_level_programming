/**
 * _strlen - given a string returns length of the string
 * @s: string input
 *
 * Return: length of a string like strlen
 */
int _strlen(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index += 1;
	}
	return (index);
}
