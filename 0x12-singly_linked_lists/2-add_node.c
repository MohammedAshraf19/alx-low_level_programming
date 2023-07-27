#include "lists.h"
#include<string.h>
#include <stdio.h>
#include <stdlib.h>
/**
* _strelen - Calculate len of string.
* @str: String
* Return: Length of String.
*/

int _strelen(char *str)
{
		int i = 0;

		while (str[i] != '\0')
			i++;
		return (i);
}

/**
* add_node - add node to linked list.
* @head: pointer to pointer to node.
* @str: String
* Return: node.
*/
list_t *add_node(list_t **head, const char *str)
{
		list_t *temp;

		temp = malloc(sizeof(list_t));

		if (temp == NULL)
			return (NULL);
		temp->len = _strelen(strdup(str));
		temp->str = strdup(str);
		if (*head == NULL)
		{
			temp->next = NULL;
			*head = temp;
			return (temp);
		}
		temp->next = *head;
		*head = temp;
		return (temp);
}
