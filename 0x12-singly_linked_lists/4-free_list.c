#include "lists.h"

/**
 * free_list - to free linked list
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
