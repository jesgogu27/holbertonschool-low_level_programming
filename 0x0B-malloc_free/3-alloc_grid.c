#include "holberton.h"

/**
 * **alloc_grid - print a Matrix
 * @width: int type
 * @height: int type
 * Return: grid of 0s
 */
int **alloc_grid(int width, int height)
{
	int j, y;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return  (NULL);
	}
	p = malloc(height * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		p[j] = malloc(width * sizeof(int));
		if (p[j] == NULL)
		{
			for (y = 0; y < j;  y++)
				free(p[y]);
			free(p);
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			p[j][y] = 0;
		}
	}
	return (p);
}
