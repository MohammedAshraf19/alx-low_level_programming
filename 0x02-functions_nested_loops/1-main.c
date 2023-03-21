#include <unistd.h>
#include "main.h"
/**
* print_alphabet - prints the character
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
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
