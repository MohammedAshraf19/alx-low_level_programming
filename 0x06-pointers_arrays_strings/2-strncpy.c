#include "main.h"
#include <stdio.h>
/**
* _strncpy -  Copy a string with n char.
* @dest: string will return.
* @src: string will copy.
* @n: number of character.
* Return: the pointer.
*/
char *_strncpy(char *dest, char *src, int n)
{
		int i;

		for (i = 0; i != n && src[i] != '\0'; i++)
		{
			dest[i] = src[i];
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
		return (dest);
}
