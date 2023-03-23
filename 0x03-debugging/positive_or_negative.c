#include <stdio.h>
#include <stdlib.h>

/**
* positive_or_negative - print if number is positive or negative
* @n: The int to print
* Return: On success 1.
*/
void positive_or_negative(int n)
{
		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else
		{
			printf("%d is negative\n", n);
		}
}
