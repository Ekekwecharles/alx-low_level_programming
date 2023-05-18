#include "lists.h"
/**
 * dlistint_len -  prints all the elements of a dlistint_t list
 * @h: head of node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
