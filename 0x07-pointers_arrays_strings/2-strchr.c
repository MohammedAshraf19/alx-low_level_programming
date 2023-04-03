#include <stdio.h>

/**
* _strchr -  locates a character in a string.
* @s: Pointer refer to array of char.
* @c: char will research for it.
* Return: pointer.
*/

char *_strchr(char *s, char c)
{
		unsigned int i;

		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == c)
			{
				return (s + i);
			}
		}
		return (NULL);
}
