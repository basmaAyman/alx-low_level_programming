#include "lists.h"
/**
 * listint_len - returns the No elements in a linked lists
 * @h: linked list
 * Return: No nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num_ = 0;

	while (h)
	{
		num_++;
		h = h->next;
	}
	return (num_);
}
