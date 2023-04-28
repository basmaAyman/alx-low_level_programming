#include "main.h"
#include <stdio.h>

/**
 * main - checks for uppercase character.
 * Description: 'Returns 1 if c is uppercase , Returns 0 otherwise'
 * Return: Always 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

