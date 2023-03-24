#include <stdio.h>
#include "main.h"
/**
* more_numbers -  prints 10 times the numbers, from 0 to 14.
* Return: void.
*/
void more_numbers(void)
{
		int n = 1;

		while (n <= 14)
		{
			int tmp = 1;

			while (tmp <= 14)
			{
				if (tmp <= 10)
					_putchar((tmp / 10) + '0');
				_putchar((tmp % 10) + '0');
				tmp++;
			}
			_putchar('\n');
			n++;
		}
}
