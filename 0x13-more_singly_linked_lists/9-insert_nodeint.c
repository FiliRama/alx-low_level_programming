#include "lists.h"

/**
 * insert_nodeint_at_index - to insert new node in specific place
 * @head: head of the linked list
 * @idx: index where a node is inserted
 * @n: input num
 * Return: Address of new node else
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *temp_head;

	temp_head = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && temp_head != NULL; i++)
		{
			temp_head = temp_head->next;
		}
	}

	if (temp_head == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = h->next;
		h->next = new_node;
	}

	return (new_node);
}

