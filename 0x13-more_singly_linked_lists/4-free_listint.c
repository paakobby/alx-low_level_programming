#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 *
 * @head: pointer to head of list
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	if (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
