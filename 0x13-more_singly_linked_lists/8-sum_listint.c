#include "lists.h"

/**
 * sum_listint - Yields total of all the facts (n) of
 * a joined list.
 * @head: Top of a list.
 *
 * Return: Total of all facts (n).
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
