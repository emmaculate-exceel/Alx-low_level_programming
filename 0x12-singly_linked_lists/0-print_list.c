#include "list.h"
/**
 * print_list - singly linked lists
 * @h : malloc - (malloc'ed string)
 * Return: count
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}

		count++;
	}

	return (count);
}
