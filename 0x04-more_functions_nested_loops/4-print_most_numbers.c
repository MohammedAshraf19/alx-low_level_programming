#include <stdio.h>
#include "main.h"

/**
* print_most_numbers - prints the numbers except 2,4.
* Return: void.
*/

void print_most_numbers(void)
{
		int tmp = '0';

		while (tmp <= '9')
		{
			if (tmp != '2' && tmp != '4')
				_putchar(tmp);
			tmp++;
		}
		_putchar('\n');
}
