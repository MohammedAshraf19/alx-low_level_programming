#include <stdio.h>
/**
* is_prime_number - Check Prime Number
* @n: The int to check
*
* Return: 1 or 0.
*/
int is_prime_number(int n)
{
		int i;

		if (n == 2)
		{
			return (1);
		}
		else if (n <= 0)
		{
			return (0);
		}
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				return (0);
			}
		}
		return (1);
}
