#include <stdlib.h>
void free_grid(int **grid, int height)
{
	int index = 0;
	while (index < height)
	{
		free(grid[index]);
		index++;
	}
	free(grid);
}
