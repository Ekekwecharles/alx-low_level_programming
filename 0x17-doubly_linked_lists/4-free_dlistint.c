#include "lists.h"
/**
 * free_dlistint - frees a double linked list
 * @head: pointer to the head of the node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head->next != NULL)
	{
		temp = head;
		free(head);
		head = temp->next;
	}
	free(head);
}
