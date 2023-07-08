#include "main.h"
#include <stdio.h>

/**
* main -  prints the number of arguments.
* @argc: integer.
* @argv: list of string.
* Return: Always 0.
*/
int main(int argc, char **argv)
{
		printf("%d\n", argc - 1);
		(void)argv;
		return (0);
}
