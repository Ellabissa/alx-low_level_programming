#include "lists.h"

/**
 * free_listint - Exempts a joined list
 * @head: Top of a list.
 *
 * Return: No yield.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
