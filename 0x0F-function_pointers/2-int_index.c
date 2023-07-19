#include "function_pointers.h"
/**
* int_index - search for num.
* @array: array of integer.
* @size: Num of element.
* @cmp: Function Pointer.
* Return: integer.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
		int i;

		if (array && size && cmp)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
			return (-1);
		}
		return (-1);
}

