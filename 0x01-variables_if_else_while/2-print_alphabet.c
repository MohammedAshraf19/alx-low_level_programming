#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Description: A C program that print the alphabet in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
		int n = 'a';

		while (n <= 'z')
		{
			putchar(n);
			n++;
		}
		putchar('\n');
		return (0);
}
