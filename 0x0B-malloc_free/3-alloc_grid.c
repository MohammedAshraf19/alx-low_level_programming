#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - return 2 dimensional array of integers.
* @width: integer.
* @height: integer.
* Return: pointer.
*/

int **alloc_grid(int width, int height)
{
		int **re;

		int i, k;

		if (width <= 0 || height <= 0 || re == 0)
		{
			return (NULL);
		}
		re = malloc(height * sizeof(int));
		for (i = 0; i < height; i++)
		{
			re[i] = malloc(width * sizeof(**re));
			if (re[i] == 0)
			{
				while (i--)
					free(re[i]);
				free(re);
				return (NULL);
			}
			for (k = 0; k < width; k++)
			{
				re[i][k] = 0;
			}
		}
		return (re);
}
