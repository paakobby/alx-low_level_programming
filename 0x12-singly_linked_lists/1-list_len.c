#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * ie list_t
 *
 * @h: pointer to the list
 *
 * Return: number of elements, ie 'count'.
 */
size_t list_len(const list_t *h)
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
