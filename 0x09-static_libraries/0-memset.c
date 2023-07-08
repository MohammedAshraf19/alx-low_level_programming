#include <stdio.h>

/**
* _memset -  fills memory with a constant byte.
* @s: Pointer refer to array of char.
* @b: character.
* @n: size.
* Return: pointer.
*/

char *_memset(char *s, char b, unsigned int n)
{
		unsigned int i;

		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
		return (s);
}
