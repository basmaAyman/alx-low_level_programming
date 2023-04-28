#include "main.h"
#include <stdio.h>

/**
 * main - draws a straight line.
 * 
 * Description: 'n is the number of times  _ should be printed,should end with  \n'
 *
 * @n: parameter is a number
 */
void print_diagonal(int n)
{
        if (n <= 0)
                _putchar('\n');
        else if (n > 0)
        {
                int ct1_, ct2_;
                for(ct1_ = 0; ct1_ < n; ct1_++)
                {
			for (ct2_ = 0; ct2_ < n; ct2_++)
			{
				if (ct2_ == ct1_)
				{
					_putchar('\\');
				}
				else if (ct2_ < ct1_)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');		
                }
        }
}
