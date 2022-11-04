/**
 * swap_int - swap two integers given pointers to their variables
 * @a: pointer to variable 1
 * @b: pointer to variable 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int interm;

	interm = *a;
	*a = *b;/*make a take value of a*/
	*b = interm; /*b takes value of a that was assigned to interm */
}

