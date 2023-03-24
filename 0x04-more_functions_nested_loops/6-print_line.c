#include <stdio.h>
#include "main.h"
/**
* print_line - prints (_)
* @n: number of print (_)
* Return: void.
*/

void print_line(int n)
{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			while (n > 0)
			{
				_putchar('_');
				n--;
			}
			_putchar('\n');
		}
}
