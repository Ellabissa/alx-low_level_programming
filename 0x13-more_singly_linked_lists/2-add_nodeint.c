#include "lists.h"

/**
 * add_nodeint - Attach new bump at the onset
 * of a joined list
 * @head: Top of a list.
 * @n: n section.
 *
 * Return: Label of the new section. NUll if it futile.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
