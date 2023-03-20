#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Description: A C program that prints  all possible combinations of numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
		int c = '0';

		while (c <= '9')
		{
			putchar(c);
			if (c != '9')
			{
				putchar(',');
				putchar(' ');
			}
			c++;
		}
		putchar('\n');
		return (0);
}
