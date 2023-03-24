#include <stdio.h>
#include "main.h"

/**
* _isupper - takes a char and check if is upper or not
* @c: char.
* Return: int 1 if is upper otherwise 0.
*/

int _isupper(int c)
{
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
