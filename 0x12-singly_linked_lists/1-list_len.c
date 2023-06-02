#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer
 * Return: h
 */
size_t list_len(const list_t *h)
{
	size_t C = 0;

	while (h)
	{
		C++;
		h = h->next;
	}
	return (C);
}
