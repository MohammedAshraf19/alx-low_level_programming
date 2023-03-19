#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: A C program that print if random number is > or < or = zero
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 0)
		{
			printf("is positive\n");
		}
		else if (n == 0)
		{
			printf("is zero\n");
		}
		else
		{
			printf("is negative\n");
		}
		return (0);
}
