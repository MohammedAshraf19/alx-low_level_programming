#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Description: A C program that prints all single digit numbers of base 10
*
* Return: Always 0 (Success)
*/
int main(void)
{
		int n = '1';

		while (n < 58)
		{
			putchar(n);
			n++;
		}
		putchar('\n');
		return (0);
}
