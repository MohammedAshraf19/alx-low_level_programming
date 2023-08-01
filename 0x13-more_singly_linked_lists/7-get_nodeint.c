#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* get_nodeint_at_index - get data of node.
* @head: pointer of head.
* @index: index of node
* Return: Head data.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
		unsigned int count = 0;

		while (head)
		{
			if (count == index)
			{
				return (head);
			}
			head = head->next;
			count++;
		}
		return (NULL);
}
