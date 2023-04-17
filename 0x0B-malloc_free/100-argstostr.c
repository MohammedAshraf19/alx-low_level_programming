#include <stdlib.h>
#include <stdio.h>

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
* argstostr -  concatenates all the arguments of your program.
* @av: pointer to pointer.
* @ac: integer.
* Return: pointer.
*/

char *argstostr(int ac, char **av)
{
		int i, k, count = 0, ns = 0;

		char *re;

		if (ac == 0 || av == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < ac; i++, ns++)
			{
				ns = ns + _strLen(av[i]);
			}
			re = malloc(ns * sizeof(char) + 1);
			if (re == 0)
			{
				return (NULL);
			}
			for (i = 0; i < ac; i++)
			{
				for (k = 0; av[i][k] != '\0'; k++, count++)
				{
					re[count] = av[i][k];
				}
				re[count] = '\n';
				count++;
			}
			return (re);
		}
}
