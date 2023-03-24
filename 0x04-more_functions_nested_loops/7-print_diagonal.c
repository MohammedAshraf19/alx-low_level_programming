#include <stdio.h>
#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal.
* @n: number of draw
* Return: void.
*/

void print_diagonal(int n)
{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			int tmp = 1;

			while (tmp <= n)
			{
				int tmp2 = 1;

				while (tmp2 < tmp)
				{
					_putchar(' ');
					tmp2++;
				}
				_putchar('\\');
				_putchar('\n');
				tmp++;
			}
		}
}
