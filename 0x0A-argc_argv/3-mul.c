#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main -   multiplies two numbers.
* @argc: integer.
* @argv: list of string.
* Return: Always 0.
*/

int main(int argc, char **argv)
{
		if (argc > 2)
		{
			printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
		}
		else
		{
			printf("Error\n");
		}
		return (0);
}
