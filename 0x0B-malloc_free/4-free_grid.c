#include "main.h"

/**
 * free_grid - free the grid
 *
 * @grid: grid of memories
 * @height: int
 *
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
