#include "lists.h"
/**
 * add_node - Attaches a new bump at the onset
 * of  list_t list.
 * @head: Top of the joined list.
 * @str: strand to reserve in the list.
 * Return: Label of the top.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t n;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new_node->len = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
