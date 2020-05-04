#include "lists.h"

/**
 * add_dnodeint_end - add new node
 * @n: integer
 * @head: a pointer to first node
 * Return: new Node
 **/


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *nAux = *head;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	while (nAux != NULL && nAux->next != NULL)
		nAux = nAux->next;

	if (nAux)
	{
		new->n = n;
		new->next = NULL;
		nAux->next = new;
		new->prev = nAux;
	}
	else
	{
		*head = new;
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
	}
	return (new);
}

