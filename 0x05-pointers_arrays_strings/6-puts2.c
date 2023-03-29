#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* puts2 - prints every other character of a string.
* @str: a string.
* Return: void.
*/
void puts2(char *str)
{
		unsigned int tmp =  0;

		while (tmp <= strlen(str) - 1)
		{
			_putchar(str[tmp]);
			tmp = tmp + 2;
		}
		if (str == "")
		{
			_putchar(' ');
		}
		_putchar('\n');
}
