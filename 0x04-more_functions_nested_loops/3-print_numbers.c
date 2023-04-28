#include "main.h"
#include <stdio.h>
/**
 * main - prints the numbers, from 0 to 9
 * Description: 'prints the numbers, from 0 to 9, followed by a new line.'
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

}
