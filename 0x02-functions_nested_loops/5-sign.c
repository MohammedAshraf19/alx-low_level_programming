#include "main.h"
/**
* print_sign - check is int > or < or = zero
* @n: The integer to check
*
* Return: On success 1.
*/
int print_sign(int n)
{
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
}
