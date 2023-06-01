#include "lists.h"
/**
 * list_len - Yields then number of sections in a list.
 * @h: Individually joined list.
 * Return: The number of section in the list.
 */

size_t list_len(const list_t *h)
{
	size_t number_of_nodes;

	number_of_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
