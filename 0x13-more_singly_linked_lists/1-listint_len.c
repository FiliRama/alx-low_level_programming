#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: head of the linked list
 *
 * Return: Numbers of node
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}

