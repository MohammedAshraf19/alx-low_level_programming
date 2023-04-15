#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main -   prints the mini num of coins to make change for an amount of money.
* @argc: integer.
* @argv: list of string.
* Return: Always 0.
*/
int main(int argc, char **argv)
{
		if (argc <= 1)
		{
			printf("Error");
			return (1);
		}
		else
		{
			int i, x, tmp;

			for (i = 1; i < argc; i++)
			{
				tmp = 0;
				x = atoi(argv[i]);
				for (; x > 0;)
				{
					if (x >= 25)
						x -= 25;
					else if (x >= 10)
						x -= 10;
					else if (x >= 5)
						x -= 5;
					else if (x >= 2)
						x -= 2;
					else
						--x;
					tmp++;
				}
				printf("%d\n", tmp);
			}
			return (0);
		}
}
