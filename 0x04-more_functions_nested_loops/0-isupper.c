#include "main.h"
#include <stdio.h>

/**
 * main - checks for uppercase character.
 * Description: 'Returns 1 if c is uppercase , Returns 0 otherwise'
 * Return: Always 0 or 1
 */

int _isupper(int c)
{
	if(c >= 65 && c <= 90)
		return (1); 
	else if(c >= 97 && c <= 122)
		return (0); 
	else
		return (0);
}

