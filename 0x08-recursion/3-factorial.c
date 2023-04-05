#include <stdio.h>

/**
* factorial -  factorial of a given number.
* @n: integer of factorial.
* Return: Integer.
*/

int factorial(int n)
{
		int fact = 0;

		if (n < 0)
		{
			return (-1);
		}
		else if (n == 1)
		{
			return (1);
		}
		else
		{
			fact = factorial(n - 1) * n;
			return (fact);
		}
}
