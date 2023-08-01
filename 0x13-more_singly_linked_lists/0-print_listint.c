#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* print_listint - print all elements in list.
* @h: pointer to first node.
* Return: Number of node.
*/
size_t print_listint(const listint_t *h)
{
		int count = 0;

		while (h != NULL)
		{
			printf("%d\n", h->n);
			count++;
			h = h->next;
		}
		return (count);
}
