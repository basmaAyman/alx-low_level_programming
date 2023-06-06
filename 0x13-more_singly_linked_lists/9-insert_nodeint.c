#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to the first
 * @idx: index
 * @n: data to insert
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;

	listint_t *newn;
	listint_t *tem = *head;

	newn = malloc(sizeof(listint_t));
	if (!newn || !head)
	{
		return (NULL);
	}
	newn->n = n;
	newn->next = NULL;

	if (idx == 0)
	{
		newn->next = *head;
		*head = newn;
		return (newn);
	}
	for (k = 0; tem && k < idx; k++)
	{
		if (k == idx - 1)
		{
			newn->next = tem->next;
			tem->next = newn;
			return (newn);
		}
		else
			tem = tem->next;
	}
	return (NULL);
}
