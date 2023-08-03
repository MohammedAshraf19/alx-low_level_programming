#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* get_bit - converts a binary number to an unsigned int.
* @n: Number.
* @index: Index of Number.
* Return: value if index.
*/
int get_bit(unsigned long int n, unsigned int index)
{
		unsigned int size = 8 * sizeof(int);

		unsigned int mask = 1 << (size - 1);

		unsigned int first = 1, i, start = 0;

		for (i = 0; i < size; i++)
		{
			if (first && (n & mask))
			{
				first = 0;
			}
			else if (first == 0)
			{
				start++;
			}
			mask = mask >> 1;
		}
		if (start < index)
		{
			return (-1);
		}
		else
		{
			mask = 1;
			for (i = 0; i <= start; i++)
			{
				if (index == i)
				{
					if (n & mask)
					{
						return (1);
					}
					else
						return (0);
				}
				mask = mask << 1;
			}
			return (-1);
		}
}
