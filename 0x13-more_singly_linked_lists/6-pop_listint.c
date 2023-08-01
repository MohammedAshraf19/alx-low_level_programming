#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* pop_listint - delete head.
* @head: pointer to pointer.
* Return: Head data.
*/
int pop_listint(listint_t **head)
{
		listint_t *temp = *head;

		int count = 0;

		if (!temp || !head)
			return (0);
		count = temp->n;
		temp = temp->next;
		free(*head);
		*head = temp;
		return (count);
}
