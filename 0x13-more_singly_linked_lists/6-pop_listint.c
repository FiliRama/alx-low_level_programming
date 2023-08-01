#include "lists.h"

/**
 * pop_listint - to delete head node
 * @head: head of the linked list
 * Return: data of head node
 */

int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *next_node;
	listint_t *current_node;

	if (*head == NULL)
		return (0);

	current_node = *head;

	head_node = current_node->n;

	next_node = current_node->next;

	free(current_node);

	*head = next_node;

	return (head_node);
}
