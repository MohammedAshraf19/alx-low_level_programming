#include "main.h"
#include <stdio.h>
/**
* _strcat -  concatenation two strings.
* @dest: string will return.
* @src: string will concat.
* Return: the pointer.
*/
char *_strcat(char *dest, char *src)
{
		int tmp = 0, i;

		while (dest[tmp] != '\0')
		{
			tmp++;
		}
		for (i = 0; src[i] != '\0'; i++)
		{
			dest[tmp] = src[i];
			tmp++;
		}
		return (dest);
}
