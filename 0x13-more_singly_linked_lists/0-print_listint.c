#include "lists.h"
/**
 * print_listint - prints all linked list
 * @h: linked list
 * Return: no nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_ = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_++;
		h = h->next;
	}
	return (num_);
}
