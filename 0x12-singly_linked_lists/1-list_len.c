#include "lists.h"

/**
 * list_len - to return number of elements in the linked list
 * @h: pointer to list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
