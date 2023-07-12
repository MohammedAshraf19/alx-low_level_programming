#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - return string
* @str: String.
* Return: char pointer or NULL.
*/
char *_strdup(char *str)
{
		int str_size, i;

		char *re;

		if (str == NULL)
		{
			return (NULL);
		}
		for (i = 0; str[i] != '\0'; i++)
		{
		}
		str_size = i + 1;
		re =  malloc(sizeof(char) * str_size);
		if (re == NULL || str_size == 0)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < str_size; i++)
			{
				re[i] = str[i];
			}
			return (re);
		}
}
