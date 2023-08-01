#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* add_nodeint - Add node at beginning of list.
* @head: pointer to pointer of head.
* @n: value of node
* Return: new node.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
		listint_t *temp;

		temp = malloc(sizeof(listint_t));
		if (temp == NULL || !head)
			return (NULL);
		temp->n = n;
		temp->next = NULL;
		if (*head)
			temp->next = *head;
		*head = temp;
		return (temp);
}
