#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc -  allocates memory for an array
* @nmemb: unsigned integer
* @size: unsigned integer
* Return: pointer or NULL.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
		int *re;

		if (size == 0 && nmemb == 0)
		{
			return (NULL);
		}
		re = calloc(nmemb, size);
		if (re == NULL)
			return (NULL);
		return (re);
}
