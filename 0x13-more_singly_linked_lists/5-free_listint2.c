#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* free_listint2 - free list
* @head: pointer to pointer.
* Return: Nothing.
*/
void free_listint2(listint_t **head)
{
		listint_t *next, *node;

		if (!head)
			return;
		node = *head;
		while (node)
		{
			next = node;
			node = node->next;
			free(next);
		}
		*head = NULL;
}
