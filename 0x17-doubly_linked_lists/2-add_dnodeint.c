#include "lists.h"

/**
 * add_dnodeint - adds new node at beginnig of a dlist
 * @head: double pointer to head
 * @n: list data
 * Return: address of new element, or Null if fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = *head;

	new = malloc(sizeof(dlistint_t));
	if (*head == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}