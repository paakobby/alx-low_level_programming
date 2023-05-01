#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 *
 * @h: pointer to list
 *
 * Return: number of nodes ie count.
 */
size_t print_listint(const listint_t *h)
{
		int count;

		count = 0;
		while (h)
		{
			printf("%d\n", h->n);
			count++;
			h = h->next;
		}

		return (count);
}
