#include "main.h"
#include <stdio.h>

/**
 * main -checks for a digit (0 through 9).
 * 
 * Description: 'Returns 1 if c is a digit , Returns 0 otherwise
 *
 * @c: parameter is a character
 *
 * Return: Always 0 or 1
 */
int _isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return (1);
	else
		return (0); 

}
