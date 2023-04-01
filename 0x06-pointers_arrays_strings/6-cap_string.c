#include <stdio.h>

/**
* checkCharacter -  check character.
* @c: character.
* Return: integer.
*/

int checkCharacter(char c)
{
		int k;

		char characters[] = " \t\n,.!?\"(){}";

		for (k = 0; k < 12; k++)
		{
			if (c == characters[k])
				return (1);
		}
		return (0);
}

/**
* cap_string -  capitalizes all words of a string.
* @a: String.
* Return: the pointer.
*/
char *cap_string(char *a)
{
		int i, flag = 1;

		for (i = 1; a[i] != '\0'; i++)
		{
			if (checkCharacter(a[i]))
			{
				flag = 1;
			}
			else if (
				(a[i] >= 'a' && a[i] <= 'z')
				&& flag)
			{
				a[i] = a[i] - 32;
				flag = 0;
			}
			else
			{
				flag = 0;
			}
		}
		return (a);
}
