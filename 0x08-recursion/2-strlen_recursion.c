#include <stdio.h>

/**
* _strlen_recursion -  length of a string.
* @s: string.
* Return: Integer.
*/

int _strlen_recursion(char *s)
{
		int len = 0;

		if (s[len] == '\0')
		{
			return (0);
		}
		else
		{
			len = _strlen_recursion(s + 1) + 1;
			return (len);
		}
}
