#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers, from 0 to 9
 *
 * Description: 'Returns 1 if c is uppercase , Returns 0 otherwise'
 *
 * Return: void
 *
 */

void print_most_numbers(void)
{
	char c;
	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
