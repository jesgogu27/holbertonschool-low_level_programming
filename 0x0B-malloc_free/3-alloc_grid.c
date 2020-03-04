#include "holberton.h"

/**
 * **alloc_grid - print a Matrix
 * @width: int type
 * @height: int type
 * Return: grid of 0s
 */
int **alloc_grid(int width, int height)
{
	int i, j;
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
		if (ptr[j] == NULL)
		{
			for (y = 0; y < j;  y++)
				free(py]);
			free(ptr);
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			ptr[j][y] = 0;
		}
	}
	return (ptr);
}
