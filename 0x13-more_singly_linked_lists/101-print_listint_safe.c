#include "lists.h"
/**
 * _check_and_print - Check the list
 * @head: head of newlist to check
 * @prev: node the list to check
 *
 * Return: number of nodes
 */
int _check_and_print(const listint_t *head, listint_safe *prev)
{
	listint_safe node, *ptr;

	if (head->next == NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		return (1);
	}

	node.next = prev;
	node.add = head;
	ptr = node.next;
	while (ptr != NULL && ptr->add != head)
		ptr = ptr->next;
	if (ptr != NULL)
	{
		printf("-> [%p] %d\n", (void *)head, head->n);
		return (0);
	}

	printf("[%p] %d\n", (void *)head, head->n);

	return (1 + _check_and_print(head->next, &node));
}
/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: head of the string
 *
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	if (head == NULL)
		return (0);

	return (_check_and_print(head, NULL));
}
