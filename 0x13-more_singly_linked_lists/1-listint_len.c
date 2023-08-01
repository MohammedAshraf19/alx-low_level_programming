#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* listint_len - Number of List.
* @h: pointer to first node.
* Return: Number of node.
*/
size_t listint_len(const listint_t *h)
{
		size_t count = 0;

		while (h != NULL)
		{
			count++;
			h = h->next;
		}
		return (count);
}
