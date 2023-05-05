#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: parameter is integer.
 * Return: 0
 */

void print_number(int n)
{
	unsigned int n_1;

	n_1 = n;

	if (n < 0)
	{
		_putchar('-');
		n_1 = -n;
	}

	if (n_1 / 10 != 0)
	{
		print_number(n_1 / 10);
	}
	_putchar((n_1 % 10) + '0');
}
