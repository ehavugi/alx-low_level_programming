#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - allocate grid
 * @width: grid width
 * @height: grid height
 *
 * Return: Return grid
 */
int **alloc_grid(int width, int height)
{
	int x = 0;
	int y = 0;
	int **grid = (int **) malloc(height * sizeof(int *));

	if (width  <= 0 || height <= 0)
	{
		return (NULL);
	}
	while (y < height)
	{
		grid[y] = (int *) malloc(width * sizeof(int));
		if (grid[y] == NULL)
		{
			x = 0;
			while (x <= y)
			{
				free(grid[x]);
				x += 1;
			}
			free(grid);
			return (NULL);
		}
		y += 1; }
	x = 0;
	if (grid == NULL)
	{
		free(grid);
		return (NULL); }
	while (x < width)
	{
		while (y < height)
		{
			grid[y][x] = 0;

			y += 1; }
		x += 1;
		y = 0; }
	return (grid);
}
