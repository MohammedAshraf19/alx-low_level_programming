#include "main.h"
#include <stdio.h>
/**
* _strcmp -  Compare two strings.
* @s1: string will return.
* @s2: string will copy.
* Return: the pointer.
*/
int _strcmp(char *s1, char *s2)
{
		int i, result = 0;

		for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
		{
			result = ((int)(*s2 - 48) - ((int)*s1 - 48));
		}
		return (result);
}
