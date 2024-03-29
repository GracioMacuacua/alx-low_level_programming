#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously
 * created by my alloc_grid function.
 *
 * @grid: a pointer to the 2 dimensional grid.
 * @height: height of the grid.
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
