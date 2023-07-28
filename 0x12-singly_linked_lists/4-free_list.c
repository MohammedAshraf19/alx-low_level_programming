#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_list - Free Linked List
* @head: pointer to node.
* Return: nothing.
*/

void free_list(list_t *head)
{
		list_t *temp = head, *next_node;

		if (!head)
			return;

		while (temp)
		{
			next_node = temp->next;
			free(temp->str);
			free(temp);
			temp = next_node;
		}
}
