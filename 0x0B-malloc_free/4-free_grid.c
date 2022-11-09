#include <stdlib.h>
/**
 * free_grid - free memory of free_grid
 * @grid: grid pointer
 * @height:height of grid.
 *
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int index = 0;

	while (index < height)
	{
		free(grid[index]);
		index += 1;
	}
	free(grid);
}
