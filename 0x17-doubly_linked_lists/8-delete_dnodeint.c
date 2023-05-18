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
	dlistint_t *temp = *head, *slow, *fast, *remove;
	unsigned int i, len = 0;

	if (*head == NULL)
		return (-1);

	for (len = 0; temp; temp = temp->next, len++)
		;
	if (index >= len)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	temp = *head;
	if (index == len - 1)
	{
		for (i = 0; i < len - 1; i++)
			temp = temp->next;
		remove = temp->next;
		temp->next = NULL;
		remove->prev = NULL;
		return (1);
	}
	temp = *head;
	for (i = 0; i < index; i++)
	{
		slow = temp;
		temp = temp->next;
	}
	fast = temp->next;
	slow->next = fast;
	fast->prev = slow;
	return (1);
}
