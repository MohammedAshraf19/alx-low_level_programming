#include <stdio.h>
/**
* _isdigit - takes a int and check if is digit or not
* @c: int.
* Return: int 1 if is digit otherwise 0.
*/

int _isdigit(int c)
{
		if (c >= '0' && c <= '9')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
