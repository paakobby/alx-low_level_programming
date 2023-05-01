#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list and
 * sets the head to NULL
 *
 * @head: pointer to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
