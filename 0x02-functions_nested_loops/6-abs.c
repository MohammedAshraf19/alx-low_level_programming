#include "main.h"
/**
* _abs - check n is positive or not and return positive
* @n: The integer to return positive
*
* Return: On success 1.
*/
int _abs(int n)
{
		if (n < 0)
			n = n * -1;
		return (n);
}

