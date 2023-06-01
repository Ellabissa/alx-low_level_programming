#include "lists.h"

/**
 * free_list - Releases list
 * @head: Top of the joined list.
 * Return: No yield.
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
