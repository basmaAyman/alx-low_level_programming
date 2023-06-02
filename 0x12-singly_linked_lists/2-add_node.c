#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning.
 * @head: double pointer
 * @str: new string.
 *
 * Return:address or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newN;
	unsigned int length = 0;

	while (str[length])
	{
		length++;

	newN = malloc(sizeof(list_t));
	if (!newN)
		return (NULL);

	newN->str = strdup(str);
	newN->len = length;
	newN->next = (*head);
	(*head) = newN;
	}
	return (*head);
}
