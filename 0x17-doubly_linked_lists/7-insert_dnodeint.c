#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the first node
 * @idx: index to be insert the new node
 * @n: number value
 * Return: the new node
 *	NULL if fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new, *slow = NULL;
	unsigned int i, len = 0;

	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (idx > len)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == len)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	temp = *h;
	for (i = 0; i < idx; i++)
	{
		slow = temp;
		temp = temp->next;
	}
	new->next = temp;
	temp->prev = new;
	new->prev = slow;
	if (slow != NULL)
		slow->next = new;
	else
		*h = new;
	return (new);
}
