#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
* print_strings -  prints of all its parameters(strings).
* @separator: string.
* @n: integer.
* Return: void.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
		va_list my_list;

		unsigned int i;

		va_start(my_list, n);
		if (n == 0)
		{
			printf("\n");
		}
		else
		{
			for (i = 0; i < n; i++)
			{
				if (i != n - 1 && separator != NULL)
				{
					char *test;

					test = va_arg(my_list, char*);
					printf("%s%s", test ? test : "(nil)", separator);
				}
				else
					printf("%s", va_arg(my_list, char*));
			}
			va_end(my_list);
			printf("\n");
		}
}
