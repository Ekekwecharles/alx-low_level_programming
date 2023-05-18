#include "lists.h"
/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 * @h: head of node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int len = 0, n;

	while (h)
	{
		n = h->n;
		printf("%d\n", n);
		len++;
		h = h->next;
	}
	return (len);
}
