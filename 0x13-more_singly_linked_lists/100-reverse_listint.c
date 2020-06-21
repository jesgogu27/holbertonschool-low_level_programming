#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 **reverse_listint-  adds a new node at the end  of a list.
 *@head: struct that content data.
 * *Return: the address of the new element or null.
 */

listint_t *reverse_listint(listint_t **head)
{

	listint_t *exit, *pn = NULL;

	while (*head != NULL)
	{
		exit = (*head)->next;
		(*head)->next = pn;
		pn = *head;
		*head = exit;
	}
	*head = pn;
	return (*head);
}
