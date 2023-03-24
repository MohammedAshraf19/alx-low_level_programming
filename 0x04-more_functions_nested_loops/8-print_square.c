#include <stdio.h>
#include "main.h"
/**
* print_square -  prints a square.
* @size:  is the size of the square
* Return: void.
*/

void print_square(int size)
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

				while (tmp2 <= size)
				{
					_putchar('#');
					tmp2++;
				}
				_putchar('\n');
				tmp++;
			}
		}
}
