#include <stdlib.h>
#include <stdio.h>
/**
* argstostr -  concatenates all the arguments of your program.
* @av: pointer to pointer.
* @ac: integer.
* Return: pointer.
*/

char *argstostr(int ac, char **av)
{
		int i, k, re_size, count = 0;

		char *re;

		if (ac == 0 || av == NULL)
			return (NULL);
		for (i = 0; i < ac; i++)
		{
			for (k = 0; av[i][k] != '\0'; k++)
			{
			}
			re_size = re_size + k;
		}
		re_size++;
		re = malloc(sizeof(char) * re_size);
		if (re == NULL)
			return (NULL);
		for (i = 0; i < ac; i++)
		{
			for (k = 0; av[i][k] != '\0'; k++)
			{
				re[count] = av[i][k];
				count++;
			}
			re[count] = '\n';
			count++;
		}
		return (re);
}
