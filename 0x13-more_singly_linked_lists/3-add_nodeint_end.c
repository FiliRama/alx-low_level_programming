#include "lists.h"

/**
 * add_nodeint_end - to add new node at the end
 * @head: head of the linked list
 * @n: number of the element.
 * Return: address of the new node else NUll
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temporary;

	(void)temporary;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	temporary = *head;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temporary->next != NULL)
		{
			temporary = temporary->next;
		}
		temporary->next = new_node;
	}

	return (*head);
}

