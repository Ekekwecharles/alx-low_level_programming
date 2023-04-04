#include "lists.h"

/**
 * listint_len - Returns the number of elements
 *               in a linked listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);

	size_t count = 0;

	const listint_t *ptr = h;

	while (ptr->next != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	count++;
	return (count);
}
