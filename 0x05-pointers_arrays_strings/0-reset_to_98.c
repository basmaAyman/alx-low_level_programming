#include "main.h"
#include <stdio.h>

/**
 * main - point int.
 * 
 * Description: 'int as parameter and updates the value it points to to 98'
 *
 * @n: parameter is a input number
 * Return: n
 */

void reset_to_98(int *n)
{
	*n = 98;
}
