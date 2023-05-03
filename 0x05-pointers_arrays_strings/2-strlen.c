#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - length of a string
 * @s: parameter is a string
 * Return: Always return length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
