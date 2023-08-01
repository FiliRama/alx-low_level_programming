#include "lists.h"

/**
 * free_listint - to free linked list
 * @head: head of the linked list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temporary;

	while ((temporary = head) != NULL)
	{
		head = head->next;
		free(temporary);
	}
}

