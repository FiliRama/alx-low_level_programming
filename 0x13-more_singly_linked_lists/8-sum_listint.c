#include "lists.h"

/**
 * sum_listint - to calculate sum
 * @head: head of the linked list
 *
 * Return: sum of data in linked list
 */
int sum_listint(listint_t *head)
{
	int Sum;

	Sum = 0;
	while (head != NULL)
	{
		Sum += head->n;
		head = head->next;
	}

	return (Sum);
}

