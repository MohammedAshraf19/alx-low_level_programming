#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* rev_string - reverse a string.
* @s: a string.
* Return: void.
*/
void rev_string(char *s)
{
		unsigned int tmp =  0;

		int tmp2 = strlen(s) - 1;

		while (tmp < strlen(s) / 2)
		{
			char swap = s[tmp];

			s[tmp] = s[tmp2];
			s[tmp2] = swap;
			tmp++;
			tmp2--;
		}
		_putchar('\n');
}
