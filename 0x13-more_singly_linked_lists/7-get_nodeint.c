#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of the linked list
 * @index: node index
 *
 * Return: nth node else NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index && head != NULL; n++)
	{
		head = head->next;
	}

	return (head);
}

