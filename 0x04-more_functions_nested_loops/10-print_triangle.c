#include <stdio.h>
#include "main.h"
/**
* print_triangle -  prints a triangle.
* @size:  is the size of the triangle
* Return: void.
*/

void print_triangle(int size)
{
		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
			int tmp = 1;

			while (tmp <= size)
			{
				int tmp2 = 1;

				while (tmp2 < size - tmp + 1)
				{
					_putchar(' ');
					tmp2++;
				}

				int tmp3 = 1;

				while (tmp3 <= tmp)
				{
					_putchar('#');
					tmp3++;
				}
				tmp++;
				_putchar('\n');
			}
		}
}
