#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
* add_nodeint_end - Add node at end of list.
* @head: pointer to pointer of head.
* @n: value of node
* Return: new node.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
		listint_t *temp, *temp2;

		temp = malloc(sizeof(listint_t));
		if (temp == NULL || !head)
			return (NULL);
		temp->n = n;
		if (*head == NULL)
		{
			temp->next = NULL;
			*head = temp;
			return (temp);
		}
		temp2 = *head;
		while (temp2->next != NULL)
		{
			temp2 = temp2->next;
		}
		temp2->next = temp;
		temp->next = NULL;
		return (temp);
}
