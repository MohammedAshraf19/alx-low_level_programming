#include <stdio.h>

/**
* _sqrt_recursion -  the natural square root of a number.
* @n: integer .
* @num: integer.
* Return: Integer.
*/

int square(int n, int num);
int _sqrt_recursion(int n)
{
		square(n, 1);
}

/**
* square -  get the natural square root of a number.
* @n: integer .
* @num: integer.
* Return: Integer.
*/

int square(int n, int num)
{
		if (num * num == n)
		{
			return (num);
		}
		else if (num * num < n)
		{
			return (square(n, num + 1));
		}
		else
			return (-1);
}
