#include "lists.h"

/**
 * reverse_listint - Overturns a joined list.
 * @head: Top of list.
 *
 * Return: Indicator to the initial bump.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *n;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
