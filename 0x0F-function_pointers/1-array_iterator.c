#include "function_pointers.h"
/**
* array_iterator - choice element of function.
* @array: array of integer.
* @size: Num of element.
* @action: Function Pointer.
* Return: void.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
		int i;

		for (i = 0; (size_t)i < size; i++)
		{
			action(array[i]);
		}
}
