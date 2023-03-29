#include <stdio.h>
#include "main.h"
/**
* _puts - prints a string.
* @str: a string.
* Return: void.
*/
void _puts(char *str)
{
		int tmp = 0;

		while (tmp < strlen(str))
		{
			_putchar(str[tmp]);
			tmp++;
		}
		_putchar('\n');
}
