#include "lists.h"

/**
 * add_dnodeint - add new node
 * @n: integer
 * @head: a pointer to first node
 * Return: new Node
 **/


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
	}
	if (new != NULL)
	{
		new->next = *head;
		new->prev = NULL;
		if (*head != NULL)
			(*head)->prev = new;
		*head = new;
		return (new);
	}
	return (NULL);
}
