#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Fn adds a new node.
 * @head: double pointer
 * @str: string
 * Return: address or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newn;
	list_t *templ = *head;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	newn = malloc(sizeof(list_t));
	if (!newn)
	{
		return (NULL);
	}
	newn->str = strdup(str);
	newn->len = len;
	newn->next = NULL;

	if (*head == NULL)
	{
		*head = newn;
		return (newn);
	}

	while (templ->next)
	{
		templ = templ->next;
	}
	templ->next = newn;

	return (newn);
}
