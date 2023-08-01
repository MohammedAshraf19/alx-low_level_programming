#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* free_listint - free list
* @head: pointer to head.
* Return: Nothing.
*/
void free_listint(listint_t *head)
{
		listint_t *next;

		while (head)
		{
			next = head;
			head = head->next;
			free(next);
		}
}
