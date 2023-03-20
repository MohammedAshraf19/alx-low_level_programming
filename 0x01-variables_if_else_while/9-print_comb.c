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
			if (c != '9')
			{
				putchar(c);
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar(c);
			}
			c++;
		}
		return (0);
}
