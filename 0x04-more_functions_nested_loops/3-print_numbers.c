#include <stdio.h>
#include "main.h"

/**
* print_numbers - prints the numbers, from 0 to 9.
* Return: void.
*/

void print_numbers(void)
{
		int tmp = '0';

		while (tmp <= '9')
		{
			_putchar(tmp);
			tmp++;
		}
		_putchar('\n');
}
