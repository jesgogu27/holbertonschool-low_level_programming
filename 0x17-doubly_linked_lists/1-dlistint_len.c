#include "lists.h"

/**
 *dlistint_len - print all elements a double linked list
 *@h: header of list
 *Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *nAux = h;
	size_t count = 0;

	while (nAux != NULL)
	{
		count++;
		nAux = nAux->next;
	}
	return (count);
}