#include "main.h"
#include <stdio.h>
/**
* string_toupper -  changes all lowercase letters of a string to uppercase.
* @a: array.
* Return: the pointer.
*/
char *string_toupper(char *a)
{
		int i;

		for (i = 0; a[i] != '\0'; i++)
		{
			if (a[i] >= 'a' && a[i] <= 'z')
			{
				a[i] = a[i] - 32;
			}
		}
		return (a);
}
