#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min:  min value.
 * @max: max value.
 *
 * Return: array.
 */
int *array_range(int min, int max)
{
		int i, len = 0;

		int *re;

		if (min > max)
			return (NULL);
		len = max - min + 1;
		re = malloc(sizeof(int) * len);
		if (re == NULL)
			return (NULL);
		for (i = 0; i < len; i++)
		{
			re[i] = min++;
		}
		return (re);
}
