#include <stdio.h>
#include "main.h"
/**
* print_number -  prints 10 times the numbers, from 0 to 14.
* @n: number
* Return: void.
*/
void print_number(int n)
{
		unsigned int re = n;

		if (n < 0)
		{
			_putchar('-');
			n = n * -1;
			re = n;
		}
		re = re / 10;
		if (re != 0)
			print_number(re);
		_putchar((unsigned int) n % 10 + '0');
}
