#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Description: A C program that prints the lowercase alphabet in reverse
*
* Return: Always 0 (Success)
*/
int main(void)
{
		char c = 'z';

		while (c >= 'a')
		{
			putchar(c);
			c--;
		}
		putchar('\n');
		return (0);
}
