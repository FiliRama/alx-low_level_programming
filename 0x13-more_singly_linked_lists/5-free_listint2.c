#include "lists.h"

/**
 * free_listint2 - to free the linked list
 * @head: head of a linked list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary;
	listint_t *current_node;

	if (head != NULL)
	{
		current_node = *head;
		while ((temporary = current_node) != NULL)
		{
			current_node = current_node->next;
			free(temporary);
		}
		*head = NULL;
	}
}

