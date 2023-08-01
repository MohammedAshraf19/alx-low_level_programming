#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* insert_nodeint_at_index - insert node in index.
* @head: pointer of head.
* @idx: index of node.
* @n: value of node.
* Return: sum of nodes.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
		unsigned int count;

		listint_t *temp, *node;

		node = malloc(sizeof(listint_t));
		temp = *head;
		node->n = n;
		if (!temp || !node)
			return (NULL);
		if (!idx)
		{
			node->next = *head;
			*head = node;
			return (node);
		}
		while (temp)
		{
			if (count == (idx - 1) && temp->next != NULL)
			{
				node->next = (temp)->next;
				temp->next = node;
				return (node);
			}
			temp = temp->next;
			count++;
		}
		free(node);
		return (NULL);
}
