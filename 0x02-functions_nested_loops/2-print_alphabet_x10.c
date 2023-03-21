#include "main.h"
/**
* print_alphabet_x10 - prints character a to z ten times
* Return: On success character.
*/
void print_alphabet_x10(void)
{
		int tmp = 1;

		while (tmp <= 10)
		{
			char c = 'a';

			while (c <= 'z')
			{
				_putchar(c);
				c++;
			}
			tmp++;
			_putchar('\n');
		}
}
