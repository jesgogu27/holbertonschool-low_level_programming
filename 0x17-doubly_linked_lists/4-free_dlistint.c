#include "lists.h"

/**
 * free_dlistint - free double linked list
 * @head: head of double linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nAux = NULL;

	while (head != NULL)
	{
		nAux = head;
		head = head->next;
		free(nAux);
	}
}
