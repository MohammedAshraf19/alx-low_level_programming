#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main -  prints multiplies two numbers.
* @argc: integer.
* @argv: list of string.
* Return: Always 0.
*/
int main(int argc, char **argv)
{
		if (argc != 3)
		{
			puts("Error");
			return (1);
		}
		else
		{
			printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		}
		return (0);
}

