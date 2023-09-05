#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - set frees a 2d array
 * @grid:its a 2d grid
 * @height:this the height dimension of grid
 * Description:sets frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; i < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
