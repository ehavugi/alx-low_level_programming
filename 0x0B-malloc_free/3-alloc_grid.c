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
	int **grid;
	int x = 0;
	int y = 0;

	grid = malloc(width * height * sizeof(int));
	printf("grid %d, %d ,%ld \n", width, height, sizeof(grid));

	if (width < 0 || height < 0 || (grid == NULL))
	{
		return (NULL);
	}
	if (grid == NULL)
	{
		return (NULL);
	}

	while (x < width)
	{
		while (y < height)
		{
			printf("wow\n");
			grid[x][y]= 0;
			printf("%d, %d\n", x, y);
			y++;
		}
		x++;
		y = 0;
	}
	printf("%d, %d\n", width, height);
	printf("%d\n", grid[1][1]);
	return (grid);

}
