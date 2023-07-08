#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main -   prints the minimum number of coins.
* @argc: integer.
* @argv: list of string.
* Return: Always 0.
*/
int main(int argc, char **argv)
{
		if (argc <= 1)
		{
			puts("Error");
			return (1);
		}
		else if (atoi(argv[1]) <= 0)
		{
			puts("0");
			return (0);
		}
		else
		{
			int count = 0, value = atoi(argv[1]);

			for (; value > 0; )
			{
				if (value >= 25)
				{
					value -= 25;
					count++;
				}
				else if (value >= 10)
				{
					value -= 10;
					count++;
				}
				else if (value >= 5)
				{
					value -= 5;
					count++;
				}
				else if (value >= 2)
				{
					value-=2;
					count++;
				}
				else
				{
					value -= 1;
					count++;
				}
			}
			printf("%d\n", count);
			return (0);
		}
}

