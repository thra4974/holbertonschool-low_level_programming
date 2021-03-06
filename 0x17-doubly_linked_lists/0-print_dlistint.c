#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t
 * @h: pointer to head of doubly linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	if (h != NULL)
	{
		while (h->next != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	}


	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->prev;
		i++;
		break;
	}
	return (i);
}
