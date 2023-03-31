#include "main.h"
#include <stdio.h>
/**
* _strncat -  concatenation two strings with n char.
* @dest: string will return.
* @src: string will concat.
* @n: number of character.
* Return: the pointer.
*/
char *_strncat(char *dest, char *src, int n)
{
		int tmp = 0, i;

		while (dest[tmp] != '\0')
		{
			tmp++;
		}
		for (i = 0; src[i] != '\0' && i != n; i++)
		{
			dest[tmp] = src[i];
			tmp++;
		}
		return (dest);
}
