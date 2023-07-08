#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* _puts - prints a string.
* @str: a string.
* Return: void.
*/
void _puts(char *str)
{
		unsigned int tmp = 0;

		while (tmp < strlen(str))
		{
			_putchar(str[tmp]);
			tmp++;
		}
		_putchar('\n');
}
