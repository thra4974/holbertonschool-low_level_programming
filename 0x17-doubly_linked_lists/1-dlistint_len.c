#include "lists.h"

/**
 * dlistint_len - returns number of elements in dlist
 * @h: pointer to head of dlist
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			h = h->next;
			i++;
		}
	}
	while (h != NULL)
	{
		h = h->prev;
		i++;
	}
	return (i);
}
