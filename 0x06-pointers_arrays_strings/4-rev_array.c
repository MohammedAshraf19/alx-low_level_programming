#include "main.h"
#include <stdio.h>
/**
* reverse_array -  reverses the content of an array of integers.
* @a: array.
* @n: size if array.
* Return: void.
*/
void reverse_array(int *a, int n)
{
		int i, tmp = n - 1;

		for (i = 0; i <= n / 2; i++)
		{
			int swap = a[i];

			a[i] = a[tmp];
			a[tmp] = swap;
			tmp--;
		}
}
