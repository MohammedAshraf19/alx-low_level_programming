#include "main.h"
#include <stdio.h>
/**
* _strcpy -  copies the string.
* @dest: string will return.
* @src: string will copy.
* Return: the pointer.
*/
char *_strcpy(char *dest, char *src)
{
		int i = 0;

		dest[i] = src[i];
		for (i = 0; src[i] != '\0'; i++)
		{
			dest[i] = src[i];
		}
		return (dest);
}
