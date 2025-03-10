#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	grid = malloc(sizeof(int) * width);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(sizeof(int) * height);
		if (grid[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}		
	}

	return (grid);
}
