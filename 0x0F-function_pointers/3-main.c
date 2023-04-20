#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
* main - Entry point.
* @argc: num element of argv.
* @argv: argumnet vector.
* Return: void.
*/

int main(int argc, char **argv)
{
		int num1, num2;

		int (*op_fun)(int, int);

		if (argc != 4)
		{
			printf("Error\n");
			exit(98);
		}
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		op_fun = get_op_func(argv[2]);
		if (!op_fun)
		{
			printf("Error\n");
			exit(99);
		}
		if (!num2 && (argv[2][0] != '/' || argv[2][0] != '%'))
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", op_fun(num1, num2));
		return (0);
}
