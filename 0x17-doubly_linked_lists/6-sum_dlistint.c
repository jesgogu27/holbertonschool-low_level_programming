#include "lists.h"

/**
 * sum_dlistint - get the sum of all the data of doble linked list
 * @head: head of double linked list
 * Return: sum of all elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}