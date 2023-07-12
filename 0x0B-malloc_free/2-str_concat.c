#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - return string
* @s1: string.
* @s2: string.
* Return: char pointer or NULL.
*/
char *str_concat(char *s1, char *s2)
{
		int i1, i2, i, str_size;

		char *re;

		if (s1 == NULL || s2 == NULL)
		{
			return (NULL);
		}
		for (i1 = 0; s1[i1] != '\0'; i1++)
		{
		}
		str_size = i1;
		for (i2 = 0; s2[i2] != '\0'; i2++)
		{
		}
		str_size = i2 + str_size + 1;
		re =  malloc(sizeof(char) * str_size);
		if (re == NULL || str_size == 0)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < i1; i++)
			{
				re[i] = s1[i];
			}
			for (i1 = 0; i1 < i2; i++, i1++)
			{
				re[i] = s2[i1];
			}
			return (re);
		}
}
