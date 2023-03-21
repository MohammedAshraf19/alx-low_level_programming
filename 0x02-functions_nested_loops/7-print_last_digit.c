#include "main.h"
/**
* print_last_digit - check n and return last digit of number
* @n: The integer to return last digit
*
* Return: On success 1.
*/
int print_last_digit(int n)
{
		if (n < 0)
			n = n * -1;
		n = n % 10;
		_putchar((n + '0'));
		return (n);
}
