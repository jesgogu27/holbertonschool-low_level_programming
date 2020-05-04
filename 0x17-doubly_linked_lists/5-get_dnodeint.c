#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a `dlistint_t` doubly LL
 * @head: pointer to head of LL
 * @index: node index to return
 * Return: node at index given or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count< index)
	{
		head = head->next;
		count++;
	}
	return (head);
}