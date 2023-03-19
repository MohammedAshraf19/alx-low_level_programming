#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Description: A C program that print the alphabet in lowercase except q,e
*
* Return: Always 0 (Success)
*/
int main(void)
{
		int lower = 'a';

		while (lower <= 'z')
		{
			if (lower != 'q' && lower != 'e')
				putchar(lower);
			lower++;
		}
		putchar('\n');
		return (0);
}
