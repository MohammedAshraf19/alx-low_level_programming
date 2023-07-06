#include <stdio.h>

/**
* _pow_recursion -  Power of a given number.
* @x: integer .
* @y: integer.
* Return: Integer.
*/

int _pow_recursion(int x, int y)
{
		int pow = 0;

		if (y < 0)
		{
			return (-1);
		}
		else if (y == 0)
		{
			return (1);
		}
		else
		{
			pow = _pow_recursion(x, y - 1) * x;
			return (pow);
		}
}

