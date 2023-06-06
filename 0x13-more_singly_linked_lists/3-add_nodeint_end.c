#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end
 * @head: pointer to the first
 * @n: data to insert
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newn;
	listint_t *tem = *head;

	newn = malloc(sizeof(listint_t));
	if (!newn)
	{
		return (NULL);
	}

	newn->n = n;
	newn->next = NULL;

	if (*head == NULL)
	{
		*head = newn;
		return (newn);
	}
	while (tem->next)
		tem = tem->next;
	tem->next = newn;
	return (newn);
}
