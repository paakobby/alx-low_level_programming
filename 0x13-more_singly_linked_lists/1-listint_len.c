#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * ie listint_t
 *
 * @h: pointer to the list
 *
 * Return: number of elements, ie 'count'.
 */
size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
