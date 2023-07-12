/**
* free_grid - free 2 dimensional array of integers.
* @grid: 2 dimensional array of integers.
* @height: integer.
* Return: Void.
*/

void free_grid(int **grid, int height)
{
		while (height--)
		{
			free(grid[height]);
		}
		free(height);
}
