#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* delete_nodeint_at_index - delete element
* @head: pointer to pointer of head.
* @index: index of node.
* Return: 1 or -1.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
		unsigned int count = 0;

		listint_t *temp, *node;

		temp = *head;
		if (!temp || !head)
			return (NULL);
		if (!index)
		{
			*head = (*head)->next;
			free(temp);
			return (1);
		}
		while (temp)
		{
			if (count == (index - 1) && temp->next != NULL)
			{
				node = temp->next;
				temp->next = node->next;
				free(node);
				return (1);
			}
			temp = temp->next;
			count++;
		}
		free(temp);
		return (-1);
}
