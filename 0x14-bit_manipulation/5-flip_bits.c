#include <stdlib.h>
#include <stdio.h>

/**
* flip_bits - flip to get from one number to another.
* @n: Number.
* @m: Number.
* Return: integer
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
		unsigned long int cpare = 1, i, count = 0;

		for (i = 0; i < sizeof(n) * 8; i++)
		{
			if ((n & cpare) ^ (m & cpare))
				count++;
			cpare = cpare << 1;
		}
		return (count);
}
