#include "lists.h"
/**
 * print_list - to print all elements of the linked list
 * @h: list pointer
 * Return: number of Nodes
**/
size_t print_list(const list_t *h)
{
	size_t number_of_nodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
