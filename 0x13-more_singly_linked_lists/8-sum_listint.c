#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* sum_listint - sum of all nodes
* @head: pointer of head.
*
* Return: sum of nodes.
*/
int sum_listint(listint_t *head)
{
		int sum = 0;

		if (!head)
			return (sum);
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
}
