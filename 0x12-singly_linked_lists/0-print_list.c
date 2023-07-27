#include "list.h"
/**
* print_list - Write a function that prints all the elements of a list_t list.
* @h: pointer to node.
*
* Return: Integer.
*/
size_t print_list(const list_t *h)
{
		size_t count = 0;

		while (h != NULL)
		{
			if (h->str == NULL)
			{
				printf("[0]");
				printf(" (nil)\n");
			}
			else
			{
				printf("[%d]", h->len);
				printf(" %s\n", h->str);
			}
			count++;
			h = h->next;
		}
		return (count);
}
