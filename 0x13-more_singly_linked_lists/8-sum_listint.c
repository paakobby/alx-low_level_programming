#include "lists.h"

/**
 * sum_listint-  function that returns the sum of
 * all the data (n) of a listint_t linked list
 *
 * @head: pointer to the first node
 *
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
	{
		return (0);
	}
	else
	{
		return (head->n + sum_listint(head->next));
	}
}
