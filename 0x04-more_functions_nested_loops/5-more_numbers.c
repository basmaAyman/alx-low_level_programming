#include "main.h"
#include <stdio.h>

/**
 * main - checks for uppercase character.
 * * Description: ' prints 10 times the numbers, from 0 to 14'
 *
 * Return: Always void
 */

void more_numbers(void)
{
        int ct1,ct2;
        for(ct1=1 ; ct1<=10 ; ct1++)
        {
                for(ct2=1 ; ct2<=14 ; ct2++)
                {
			if (ct2 >= 10)
			{
				_putchar('1');
			}
                        _putchar(ct2 % 10 + '0');
                }
                _putchar('\n');
        }
}
