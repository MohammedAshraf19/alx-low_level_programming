#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - return string
* @width: Integer.
* @height: Integer.
* Return:  2 dimensional array or NULL.
*/
int **alloc_grid(int width, int height)
{
		int i, k;

		int **re;

		re = malloc(sizeof(int) * height);
		if (width <= 0 || height <= 0 || re == 0)
			return (NULL);
		for (i = 0; i < height; i++)
		{
			re[i] = malloc(sizeof(**re) * width);
			if (re[i] == 0)
			{
				while (i--)
				{
					free(re[i]);
				}
				free(re);
				return (NULL);
			}
			for (k = 0; k < height; k++)
			{
				re[i][k] = 0;
			}
		}
		return (re);
}
