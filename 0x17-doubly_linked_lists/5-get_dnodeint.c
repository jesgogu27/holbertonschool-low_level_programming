#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node
 * @head: pointer to head Dll
 * @index: node index
 * Return: node at index given
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}
	return (head);
}
