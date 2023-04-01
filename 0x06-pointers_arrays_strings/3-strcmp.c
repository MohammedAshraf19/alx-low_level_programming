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
		int result = 0;

		while (*s1)
		{
			if (*s1 != *s2)
			{
				result = ((int)(*s1 - 48) - ((int)*s2 - 48));
				break;
			}
			s1++;
			s2++;
		}
		return (result);
}
