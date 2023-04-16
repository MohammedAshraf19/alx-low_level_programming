#include <stdlib.h>
#include <stdio.h>

/**
* str_concat - concatenates two strings.
* @s1: string.
* @s2: string.
* Return: pointer.
*/

char *str_concat(char *s1, char *s2)
{
		int i, k = 0;

		char *re;

		if (s1 == NULL)
			s1 = "\0";
		if (s2 == NULL)
			s2 = "\0";
		for (i = 0; s1[i] != '\0'; i++)
		;
		for (; s2[i] != '\0'; i++)
		;
		re = malloc(i * sizeof(char) + 1);
		if (re == 0)
			return (NULL);
		for (i = 0; s1[i] != '\0'; i++)
		{
			re[i] = s1[i];
		}
		for (; s2[k] != '\0'; k++, i++)
		{
			re[i] = s2[k];
		}
		re[i] = '\0';
		return (re);
}
