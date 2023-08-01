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
	listint_t *Node, *Temporary;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	Temporary = *head;
	for (; i < idx - 1 && Temporary != NULL; i++)
		Temporary = Temporary->next;
	if (Temporary == NULL)
		return (NULL);
	}
	Node = malloc(sizeof(listint_t));
	if (Node == NULL)
		return (NULL);
	Node->n = n;
	if (idx == 0)
	{
		Node->next = *head;
		*head = Node;
		return (Node);
	}
	Node->next = Temporary->next;
	Temporary->next = Node;
	return (Node);
}

