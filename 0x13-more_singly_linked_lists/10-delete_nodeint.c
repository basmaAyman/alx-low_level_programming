#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * @head: pointer to the first
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tem = *head;
	listint_t *curr = NULL;

	unsigned int k = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(tem);
		return (1);
	}
	while (k < index - 1)
	{
		if (!tem || !(tem->next))
			return (-1);
		tem = tem->next;
		k++;
	}
	curr = tem->next;
	tem->next = curr->next;
	free(curr);
	return (1);
}
