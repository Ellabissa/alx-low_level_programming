#include "lists.h"

/**
 * pop_listint - Erases the top bump of
 * a joined list
 * @head: Top of a list.
 *
 * Return: Top bump's statistics.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}
