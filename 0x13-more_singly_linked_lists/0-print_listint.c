#include "lists.h"

/**
 * print_listint - to print all the elements
 * @h: head of the linked list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
