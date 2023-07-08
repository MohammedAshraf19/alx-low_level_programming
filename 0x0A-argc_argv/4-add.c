#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main -  prints adds positive numbers.
* @argc: integer.
* @argv: list of string.
* Return: Always 0.
*/
int main(int argc, char **argv)
{
		int i, count = 0;

		for (i = 1; i != argc; i++)
		{
			if ((argv[i][0] >= 'a' && argv[i][0] <= 'z') ||
				(argv[i][0] >= 'A' && argv[i][0] <= 'Z'))
			{
				puts("Error");
				return (1);
			}
			else
			{
				count += atoi(argv[i]);
			}
		}
		printf("%d\n", count);
		return (0);
}
