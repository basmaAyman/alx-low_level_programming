#include "lists.h"

/**
 * free_listint_safe - Fn frees a linked list
 * @h: pointer to the first node
 * Return: No elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t leng = 0;
	int dif;
	listint_t *tem;

	if (!h || !*h)
	{
		return (0);
	}
	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			tem = (*h)->next;
			free(*h);
			*h = tem;
			leng++;
		}
		else
		{
			free(*h);
			*h = NULL;
			leng++;
			break;
		}
	}
	*h = NULL;
	return (leng);
}
