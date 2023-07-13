#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strLen - get length of string.
* @c: string.
* Return: integer.
*/
int _strLen(char *c)
{
		int i;

		for (i = 0; c[i] != '\0'; i++)
		;
		return (i);
}



/**
* string_nconcat -  concatenates two strings.
* @s1: string
* @s2: string
* @n: integer
* Return: pointer or NULL.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
		char *re;

		int len1, i;

		unsigned int k;

		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";
		len1 = _strLen(s1);
		re = malloc(sizeof(char) * (len1 + n + 1));
		if (re == 0)
		{
			return (NULL);
		}
		for (i = 0; s1[i] != '\0'; i++)
		{
			re[i] = s1[i];
		}
		for (k = 0; k < n; k++)
		{
			re[i] = s2[k];
			i++;
		}
		re[i] = '\0';
		return (re);
}
