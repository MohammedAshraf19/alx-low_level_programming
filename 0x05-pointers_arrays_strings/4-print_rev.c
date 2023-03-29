#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* print_rev - prints a reverse string.
* @s: a string.
* Return: void.
*/
void print_rev(char *s)
{
		int tmp = strlen(s) - 1;

		while (tmp >= 0)
		{
			_putchar(s[tmp]);
			tmp--;
		}
		_putchar('\n');
}
