#include "main.h"
#include <stdio.h>

/**
* main - Entry point
*
* Description: "int as parameter and updates the value it points to to 98"
*
* @n: parameter is a input number
*
* Return: always return  n
*/

void reset_to_98(int *n)
{
	*n = 98;
}
