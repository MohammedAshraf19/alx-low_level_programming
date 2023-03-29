#include "main.h"
#include <stdio.h>
/**
* puts_half -  prints half of a string.
* @str: a string.
* Return: void.
*/
void puts_half(char *str)
{
		int i;

		while (str[i] != '\0')
		{
			i++;
		}
		i++;
		i = i / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
}
