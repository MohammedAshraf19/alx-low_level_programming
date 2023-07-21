#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers -  prints of all its parameters.
* @separator: string.
* @n: integer.
* Return: void.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
		va_list my_list;

		unsigned int i;

		va_start(my_list, n);
		for (i = 0; i < n; i++)
		{
			if (i != n - 1 && separator != NULL)
				printf("%d%s", va_arg(my_list, int), separator);
			else
				printf("%d", va_arg(my_list, int));
		}
		va_end(my_list);
		printf("\n");
}

