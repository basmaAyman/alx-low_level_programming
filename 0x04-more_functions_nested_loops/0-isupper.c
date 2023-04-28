#include "main.h"
#include <stdio.h>

/**
 * main - checks for uppercase character.
 * Description: 'Returns 1 if c is uppercase , Returns 0 otherwise'
 * Return: Always 0 or 1
 */
int _isupper(int character)
{
	if(character >= 65 && character <= 90)
	{
		return (1);
	}
	else if(character >= 97 && character <= 122)
	{
		return (0);
	}
	else
	{
		return (0);
	}

}
