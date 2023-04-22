#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
* print_int -  prints int.
* @separator: string.
* @l: va_list.
* Return: void.
*/
void print_int(char *separator, va_list l)
{
		printf("%s%d", separator, va_arg(l, int));
}
/**
* print_char -  prints char.
* @separator: string.
* @l: va_list.
* Return: void.
*/
void print_char(char *separator, va_list l)
{
		printf("%s%c", separator, va_arg(l, int));
}
/**
* print_double -  prints double.
* @separator: string.
* @l: va_list.
* Return: void.
*/
void print_double(char *separator, va_list l)
{
		printf("%s%f", separator, va_arg(l, double));
}
/**
* print_string -  prints string.
* @separator: string.
* @l: va_list.
* Return: void.
*/
void print_string(char *separator, va_list l)
{
		char *st = va_arg(l, char *);

		switch ((int)(!st))
			case 1:
				st = "(nil)";
		printf("%s%s", separator, st);
}


/**
* print_all -  prints anything.
* @format: string.
* Return: void.
*/
void print_all(const char * const format, ...)
{
		va_list my_list;

		int i = 0, k;

		char *sperator = "";

		token_t tokens[] = {
			{"c", print_char},
			{"i", print_int},
			{"f", print_double},
			{"s", print_string},
			{NULL, NULL},
		};

		va_start(my_list, format);
		while (format && format[i])
		{
			k = 0;
			while (tokens[k].token)
			{
				if (tokens[k].token[0] == format[i])
				{
					tokens[k].f(sperator, my_list);
					sperator = ", ";
					break;
				}
				k++;
			}
			i++;
		}
		printf("\n");
		va_end(my_list);
}
