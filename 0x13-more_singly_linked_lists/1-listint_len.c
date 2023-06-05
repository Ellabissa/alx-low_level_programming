#include "lists.h"

/**
 * listint_len - Yields the number of section in
 * a joined list.
 * @h: Top of a list.
 *
 * Return: Numbers of bumps.
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
