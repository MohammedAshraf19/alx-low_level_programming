#include <stdio.h>

/**
* _strspn - gets the length of a prefix substring.
* @s: string.
* @accept: string.
* Return: unsigned integer.
*/

unsigned int _strspn(char *s, char *accept)
{
		unsigned int i, k;

		for (i = 0; s[i] != '\0'; i++)
		{
			for (k = 0; s[i] != accept[k]; k++)
			{
				if (accept[k] == '\0')
					return (i);
			}
		}
		return (i);
}
