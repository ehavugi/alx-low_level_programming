/**
 * _strcmp - compare s1 and s2
 * @s1: input string 1
 * @s2: input string 2
 *
 * Return: 0 if s1 ==  s2 otherwise int less than 0
 * if s2 > s1, greater than 0 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0;
	int diff = 0;

	while ((s1[index] != '\0') && (diff == 0))
	{
		diff = s1[index] - s2[index];
		index += 1;
	}
	return (diff);
}
