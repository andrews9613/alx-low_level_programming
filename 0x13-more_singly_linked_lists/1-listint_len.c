#include "lists.h"

/**
 * listint_len - Count linked list elements
 * @h: linked list of type listint_t to move through space
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
