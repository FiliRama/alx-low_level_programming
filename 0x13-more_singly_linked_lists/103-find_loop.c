#include "lists.h"

/**
 * find_listint_loop - to find a loop
 * @head: head of linked list
 *
 * Return: address of loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *new_node;
	listint_t *previous_node;

	new_node = head;
	previous_node = head;
	while (head && new_node && new_node->next)
	{
		head = head->next;
		new_node = new_node->next->next;

		if (head == new_node)
		{
			head = previous_node;
			previous_node =  new_node;
			while (1)
			{
				new_node = previous_node;
				while (new_node->next != head && new_node->next != previous_node)
				{
					new_node = new_node->next;
				}
				if (new_node->next == head)
					break;

				head = head->next;
			}
			return (new_node->next);
		}
	}

	return (NULL);
}

