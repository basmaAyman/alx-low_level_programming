#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data
 * @head: first node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sumA = 0;
	listint_t *tem = head;

	while (tem)
	{
		sumA += tem->n;
		tem = tem->next;
	}
	return (sumA);
}
