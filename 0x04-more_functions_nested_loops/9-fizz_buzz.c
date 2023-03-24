#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that  prints the numbers from 1 to 100.
 *
 * Return: Alawys 0 (Success)
*/

int main(void)
{
		int tmp = 1;

		while (tmp <= 100)
		{
			if (tmp == 100)
			{
				if (tmp % 3 == 0 && tmp % 5 == 0)
					printf("FizzBuzz");
				else if (tmp % 3 == 0)
					printf("Fizz");
				else if (tmp % 5 == 0)
				{
					printf("Buzz");
				}
				else
					printf("%d", tmp);
				tmp++;
			}
			else
			{
				if (tmp % 3 == 0 && tmp % 5 == 0)
					printf("FizzBuzz ");
				else if (tmp % 3 == 0)
					printf("Fizz ");
				else if (tmp % 5 == 0)
				{
					printf("Buzz ");
				}
				else
					printf("%d ", tmp);
				tmp++;
			}
		}
		printf("\n");
		return (0);
}
