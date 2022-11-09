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
	int **grid = (int **) malloc(width * sizeof(int *));

	if (width  <= 0 || height <= 0 )
	{
		return (NULL);
	}
	while (x < width)
	{
		grid[x] = (int *) malloc(height * sizeof(int));
		x++;
	}
	x = 0;

	if (grid == NULL)
	{
		return (NULL);
	}

	while (x < width)
	{
		while (y < height)
		{
			grid[y][x] = 0;

			y++;
		}
		x++;
		y = 0;
	}
	return (grid);

}
