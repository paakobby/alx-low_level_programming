#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 *
 * @h: pointer to list
 *
 * Return: number of nodes ie count.
 */
size_t print_list(const list_t *h)
{
		int count;

		count = 0;
		while (h)
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%d] %s\n", h->len, h->str);
			}
			count++;
			h = h->next;
		}

		return (count);
}
