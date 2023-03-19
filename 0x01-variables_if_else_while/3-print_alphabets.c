#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Description: A C program that print the alphabet in lowercase, and uppercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
		int lower = 'a', upper = 'A';

		while (lower <= 'z')
		{
			putchar(lower);
			lower++;
		}
		while (upper <= 'Z')
		{
			putchar(upper);
			upper++;
		}
		putchar('\n');
		return (0);
}
