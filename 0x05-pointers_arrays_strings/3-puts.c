#include <stdio.h>
#include "main.h"
/**
* _puts - prints a string.
* @str: a string.
* Return: void.
*/
void _puts(char *str)
{
		for (int i = 0; i < strlen(str); i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
}
