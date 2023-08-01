#include "lists.h"

/**
 * print_listint_safe - to print safe linked list
 * @head: head
 * Return: total number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp_node = NULL;
	const listint_t *l_n = NULL;
	size_t i = 0;
	size_t new_node;

	temp_node = head;
	while (temp_node)
	{
		printf("[%p] %d\n", (void *)temp_node, temp_node->n);
		i++;
		temp_node = temp_node->next;
		l_n = head;
		new_node = 0;
		while (new_node < i)
		{
			if (temp_node == l_n)
			{
				printf("-> [%p] %d\n", (void *)temp_node, temp_node->n);
				return (i);
			}
			l_n = l_n->next;
			new_node++;
		}
		if (!head)
			exit(98);
	}
	return (i);
}

