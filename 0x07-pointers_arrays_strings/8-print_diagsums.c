#include <stdio.h>

/**
* print_diagsums - sum of the two diagonals of a square matrix of integers.
* @a: 2D array.
* @size: size of array.
* Return: Void.
*/

void print_diagsums(int *a, int size)
{
		int i, sum = 0, sum2 = 0;

		for (i = 0; i < size; i++)
		{
			sum = sum + a[i];
			sum2 = sum2 + a[size - 1 - i];
			a = a + size;
		}
		printf("%d, %d\n", sum, sum2);
}
