#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* list_len - Calculate number of elements in a linked list.
* @h: pointer to node.
*
* Return: Integer.
*/
size_t list_len(const list_t *h)
{
		int count = 0;

		while (h != NULL)
		{
			count++;
			h = h->next;
		}
		return (count);
}
