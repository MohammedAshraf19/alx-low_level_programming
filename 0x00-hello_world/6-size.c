#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the size of various types
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
		char c ;
		printf("%d\n", sizeof(c));
		short s;
		printf("%d\n", sizeof(s));
		int i;
		printf("%d\n", sizeof(i));
		long l;
		printf("%d\n", sizeof(l));
		double d;
		printf("%d\n", sizeof(d));
		float f;
		printf("%d", sizeof(f));
}
