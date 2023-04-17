#include <stdlib.h>
#include <stdio.h>

/**
* free_grid - frees a 2 dimensional array of integers.
* @grid: pointer to pointer.
* @height: integer.
* Return: void.
*/

void free_grid(int **grid, int height)
{
		while (height--)
			free(grid[height]);
		free(grid);
}
