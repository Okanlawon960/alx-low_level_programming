#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - function that returns a pointer
 *
 * @width: parameter
 * @height: parameter
 *
 * Return: returns a pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);

			free(grid);
			return (NULL);
		}

		for (k = 0; k < width; k++)
		{
			grid[i][k] = 0;
		}
	}

	return (grid);
}
