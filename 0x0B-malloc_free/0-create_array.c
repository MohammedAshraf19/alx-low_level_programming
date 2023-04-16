#include <stdio.h>
#include <stdlib.h>

/**
* create_array -creates an array of chars, and init it with a specific char.
* @size: integer.
* @c: char.
* Return: pointer.
*/

char *create_array(unsigned int size, char c)
{
		char *re = malloc(sizeof(char) * size);

		unsigned int i;

		if (size == 0)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				re[i] = c;
			}
			re[i] = '\0';
			return (re);
		}
}
