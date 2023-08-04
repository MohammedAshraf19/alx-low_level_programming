#include <stdlib.h>
#include <stdio.h>

/**
* clear_bit - sets the value of a bit to 0 at a given index.
* @n: Number.
* @index: Index of Number.
* Return: integer
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
		if (index > sizeof(n) * 8)
			return (-1);
		if (*n & (1 << index))
			*n = *n ^ (1 << index);
		return (1);
}
