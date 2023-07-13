#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked -  concatenates all the arguments.
* @b: Integer.
* Return: (void).
*/

void *malloc_checked(unsigned int b)
{
		int *re;

		re = malloc(b);
		if (re == 0)
		{
			exit(98);
		}
		return  (re);
}
