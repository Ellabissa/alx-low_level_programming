#include "lists.h"

/**
 * get_nodeint_at_index - yields the nth bump of a joined list
 * @head: Top of a list.
 * @index: Indicator of the bump.
 *
 * Return: nth bump. If bump does not exist, yields NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
