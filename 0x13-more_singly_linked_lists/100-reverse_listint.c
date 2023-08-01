#include "lists.h"

/**
 * reverse_listint - to reverse the link
 * @head: head of the linked list
 *
 * Return: first node pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *Pointer;
	listint_t *New;

	Pointer = NULL;
	New = NULL;

	while (*head != NULL)
	{
		New = (*head)->next;
		(*head)->next = Pointer;
		Pointer = *head;
		*head = New;
	}

	*head = Pointer;
	return (*head);
}

