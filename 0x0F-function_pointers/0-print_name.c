#include <stddef.h>
#include "function_pointers.h"
/**
* print_name - prints a name.
* @name: string.
* @f: Function Pointer.
* Return: void.
*/
void print_name(char *name, void (*f)(char *))
{
		if (name && f)
			f(name);
}
