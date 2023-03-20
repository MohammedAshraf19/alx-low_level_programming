#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - Entry point
*
* Description: A C program that prints  all possible combinations of numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
		int digit = 0, digit2, digit3;

		while (digit <= 9)
		{
			digit2 = 0;
			while (digit2 <= 9)
			{
				digit3 = 0;
				while (digit3 <= 9)
				{
					if (digit != digit2 && digit < digit2 &&
						digit2 != digit3 && digit2 < digit3)
					{
						putchar(digit + 48);
						putchar(digit2 + 48);
						putchar(digit3 + 48);

						if (digit + digit2 + digit3 != 24)
						{
							putchar(',');
							putchar(' ');
						}
					}
					digit3++;
				}
				digit2++;
			}
			digit++;
		}
		putchar('\n');
		return (0);
}
