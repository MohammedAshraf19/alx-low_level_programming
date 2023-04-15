#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main -   adds positive numbers.
* @argc: integer.
* @argv: list of string.
* Return: Always 0.
*/
int main(int argc, char **argv)
{
		if (argc < 1)
		{
			printf("0");
			return (0);
		}
		else
		{
			int i, sum  = 0;

			for (i = 1; i < argc; i++)
			{
				if ((argv[i][0] >= 'a' && argv[i][0] <= 'z') ||
				(argv[i][0] >= 'A' && argv[i][0] <= 'Z'))
				{
					printf("Error");
					return (1);
				}
				else
				{
					sum += atoi(argv[i]);
				}
			}
			printf("%d\n", sum);
			return (0);
		}
}
