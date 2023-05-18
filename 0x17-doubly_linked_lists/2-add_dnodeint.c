#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @n: number arg
 * @head: pointer to the head of the node
 * Return: new node
 *	or NULL if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	if (*head != NULL)
		(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
