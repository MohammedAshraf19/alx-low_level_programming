#include <stdio.h>

/**
* _strstr -  locates a substring.
* @haystack: string.
* @needle: string.
* Return: pointer.
*/

char *_strstr(char *haystack, char *needle)
{
		int i, k, tmp;

		int found = 0;

		for (i = 0; haystack[i] != '\0'; i++)
		{
			tmp = i;
			for (k = 0; needle[k] != '\0'; k++)
			{
				if (needle[k] == haystack[tmp])
				{
					found = 1;
				}
				else
				{
					found = 0;
					break;
				}
				tmp++;
			}
			if (found)
				return (haystack + i);
		}
		return (0);
}
