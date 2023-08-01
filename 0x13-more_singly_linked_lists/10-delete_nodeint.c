#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node in specific location
 * @head: head of the linked list
 * @index: index
 * Return: 1 else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *back_node;
	listint_t *next;

	back_node = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && back_node != NULL; i++)
		{
			back_node = back_node->next;
		}
	}

	if (back_node == NULL || (back_node->next == NULL && index != 0))
	{
		return (-1);
	}

	next = back_node->next;

	if (index != 0)
	{
		back_node->next = next->next;
		free(next);
	}
	else
	{
		free(back_node);
		*head = next;
	}

	return (1);
}

