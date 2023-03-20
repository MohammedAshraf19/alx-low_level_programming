#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Description: A C program that prints  all the numbers of base 16 in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
		int n = '0', c = 'a';

		while (n <= '9')
		{
			putchar(n);
			n++;
		}
		while (c <= 'f')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		return (0);
}
