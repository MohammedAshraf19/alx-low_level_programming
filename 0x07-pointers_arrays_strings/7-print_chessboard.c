#include <stdio.h>
#include "main.h"

/**
* print_chessboard -  locates a substring.
* @a: array.
* Return: Void.
*/

void print_chessboard(char (*a)[8])
{
		int i, k;

		for (i = 0; i < 8; i++)
		{
			for (int k = 0; k < 8; k++)
			{
				_putchar(a[i][k]);
			}
			_putchar('\n');
		}
}
