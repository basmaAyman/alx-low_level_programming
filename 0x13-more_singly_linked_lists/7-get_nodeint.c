#include "lists.h"

/**
 * get_nodeint_at_index - returns at a certain index
 * @head: first node
 * @index: index of the node
 * Return: pointer or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;

	listint_t *tem = head;

	while (tem && k < index)
	{
		tem = tem->next;
		k++;
	}
	return (tem ? tem : NULL);
}
