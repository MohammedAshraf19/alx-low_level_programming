#include <stdio.h>
/**
* swap_int -  swaps the values of two integers.
* @a: The first int.
* @b: The second int.
* Return: void.
*/
void swap_int(int *a, int *b)
{
		int swap = *a;
		*a = *b;
		*b = swap;
}
