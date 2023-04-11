#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocate for the grid
 * @grid: grid to free
 * @height: height of the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a = 0;

	for (; a < height; a++)
		free(grid[a]);
	free(grid);
}
