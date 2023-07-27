#include "lists.h"
/**
 * add_node - to add new node in beginning of the list
 * @head: head node
 * @str: string to sto be added in the node
 * Return: address of new head node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;
	size_t next_char;

	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);

	new_head->str = strdup(str);

	for (next_char = 0; str[next_char]; next_char++)
		;

	new_head->len = next_char;
	new_head->next = *head;
	*head = new_head;

	return (*head);
}
