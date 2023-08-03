#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* print_binary - converts a binary number to an unsigned int.
* @n: Number.
* Return: no thing.
*/
void print_binary(unsigned long int n)
{
		unsigned int size = 8 * sizeof(int);

		unsigned int mask = 1 << (size - 1);

		unsigned int first = 1, i;

		if (n == 0)
		{
			_putchar('0');
			return;
		}
		for (i = 0; i < size; i++)
		{
			if (first && (n & mask))
			{
				_putchar('1');
				first = 0;
			}
			else if (first == 0)
			{
				(n & mask) ? _putchar('1') : _putchar('0');
			}
			mask = mask >> 1;
		}
}
