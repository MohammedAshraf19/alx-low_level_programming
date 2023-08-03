#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - converts a binary number to Integer.
* @b: pointer to character.
* Return: Integer.
*/

unsigned int binary_to_uint(const char *b)
{
		unsigned int count = 0, i, num = 1;

		if (b == NULL)
		{
			return (0);
		}
		for (i = 0; b[i] != '\0'; i++)
		{}
		i = i - 1;
		for (; i != 0; i--)
		{
			if (b[i] != '0' && b[i] != '1')
			{
				return (0);
			}
			if (b[i] == '1')
			{
				count += num;
			}
			num *= 2;
		}
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			count += num;
		}
		num *= 2;
		return (count);
}
