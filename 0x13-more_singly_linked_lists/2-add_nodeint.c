#include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head: pointer
 * @n: data to insert
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newn;

	newn = malloc(sizeof(listint_t));

	if (!newn)
	{
		return (NULL);
	}
	newn->n = n;
	newn->next = *head;
	*head = newn;
	return (newn);
}
