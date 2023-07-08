#include <stdio.h>

/**
* _strpbrk -  searches a string for any of a set of bytes.
* @s: string.
* @accept: string.
* Return: pointer.
*/

char *_strpbrk(char *s, char *accept)
{
		int i, k;

		for (i = 0; s[i] != '\0'; i++)
		{
			for (k = 0; accept[k] != '\0'; k++)
			{
				if (s[i] == accept[k])
					return (s + i);
			}
		}
		return ('\0');
}
