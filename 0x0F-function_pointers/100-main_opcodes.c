#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point.
* @argc: num element of argv.
* @argv: argumnet vector.
* Return: void.
*/

int main(int argc, char **argv)
{
		char *ptr = (char *) main;

		int i;

		if (argc != 2)
		{
			printf("Error");
			exit(1);
		}
		i = atoi(argv[1]);
		if (!i)
		{
			printf("Error");
			exit(2);
		}
		while (i--)
		{
			printf("%02hhx%s", *ptr++, i ? " " : "\n");
		}
		return (0);
}
