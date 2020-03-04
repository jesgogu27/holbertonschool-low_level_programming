#include "holberton.h"

/**
 *free_grid - that frees a 2 dimensional grid previously created
 *@grid: pointer
 *@height: integer
 *Return: void
 */

void free_grid(int **grid, int height)
{

	int i;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (i = 0; i < height;  i++)
	{
		free(grid[i]);
	}
	free(grid);
}
