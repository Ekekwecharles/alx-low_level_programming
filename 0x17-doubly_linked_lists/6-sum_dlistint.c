#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n)
 * @head: pointer to the first node
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
