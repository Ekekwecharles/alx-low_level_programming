#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node of a dlistint_t linked list
 * @head: pointer to the first node
 * @index: index to be retrieved
 * Return: the found node
 *	NULL if fail
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i, len = 0;

	while (temp)
	{
		temp = temp->next;
		len++;
	}

	if (index >= len)
		return (NULL);

	temp = head;
	for (i = 0; i < index; i++)
		temp = temp->next;

	return (temp);
}
