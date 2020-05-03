#include "lists.h"

/**
 *print_dlistint - print all elements a double linked list
 *@h: header of list
 *Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *nAux = h;
	size_t count = 0;

	while (nAux != NULL)
	{
		count++;
		printf("%u\n", nAux->n);
		nAux = nAux->next;
	}
	return (count);
}
