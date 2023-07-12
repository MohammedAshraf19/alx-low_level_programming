#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - Check Prime Number
* @size: size of array.
* @c: char
*
* Return: char pointer or NULL.
*/
char *create_array(unsigned int size, char c)
{
		char *re;

		re =  malloc(sizeof(char) * size);
		if (re == NULL || size == 0)
		{
			return (NULL);
		}
		else
		{
			unsigned int i;

			for (i = 0; i < size; i++)
			{
				re[i] = c;
			}
			return (re);
		}
}
