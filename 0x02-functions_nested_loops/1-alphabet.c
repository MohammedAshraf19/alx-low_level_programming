#include "main.h"
/**
* print_alphabet - prints character a to z
*
* Return: On success character.
*/
void print_alphabet(void)
{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
}
