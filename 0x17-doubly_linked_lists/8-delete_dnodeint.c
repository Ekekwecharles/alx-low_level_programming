#include "lists.h"
/**
 * delete_dnodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node
 * @index: index to be insert the new node
 * Return: 1
 *	-1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; i < index && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL)
		return (-1);

	temp->prev->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}
