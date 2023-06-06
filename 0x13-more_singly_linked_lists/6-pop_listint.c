#include "lists.h"

/**
 * pop_listint - deletes the head
 * @head: pointer to the first
 * Return: the data inside or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tem;

	int num_;

	if (!head || !*head)
	{
		return (0);
	}

	num_ = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;
	return (num_);
}
