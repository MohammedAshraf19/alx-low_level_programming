#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - copy pointer.
* @str: string.
* Return: pointer.
*/

char *_strdup(char *str)
{
		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			int i;

			char *re;

			for (i = 0; str[i] != '\0'; i++)
			{
			}
			re = malloc(i);
			for (i = 0; str[i] != '\0'; i++)
			{
				re[i] = str[i];
			}
			return (re);
		}
}