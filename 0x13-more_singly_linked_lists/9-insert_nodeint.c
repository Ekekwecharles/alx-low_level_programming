#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head, *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = ptr;
		*head = new;
		return (new);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (ptr == NULL || ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
	}

	new->next = ptr->next;
	ptr->next = new;

	return (new);
}



