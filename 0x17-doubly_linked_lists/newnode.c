#include "list.h"


/**
 * newnode - add new node
 * @n: integer
 * Return: new Node
 **/

dlistint_t *newnode(int n)
{
	dlistint_t new = NULL;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
	}
	return (new);
}
