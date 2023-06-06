#include "lists.h"
/**
 * free_listint - Fn that frees a linked list
 * @head: list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tem;

	while (head)
	{
		tem = head->next;
		free(head);
		head = tem;
	}
}
