#include "main.h"
#include <stdio.h>

/**
 * main - draws a straight line.
 * 
 * Description: 'n is the number of times  _ should be printed,should end with  \n'
 *
 * @n: parameter is a number
 */
void print_line(int n)
{
	if(n<=0)
		_putchar('\n');
	else if(n>0)
	{
		int ct1;
		for(ct1=0; ct1<=n; ct1++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
